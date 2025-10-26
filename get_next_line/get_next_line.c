/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 18:04:53 by nsmail            #+#    #+#             */
/*   Updated: 2025/06/15 16:25:40 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*stash = NULL;
	char		*line;
	char		*buf;
	ssize_t		bytes_read;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	buf = NULL;
	bytes_read = 0;
	stash = read_and_stash(fd, stash, buf, bytes_read);
	if (!stash)
		return (free(stash), stash = NULL);
	line = extract_line(stash);
	if (!line)
		return (free(stash), stash = NULL);
	if (stash)
		stash = clean_stash(stash);
	if (!stash)
		return (free(line), stash = NULL);
	if (stash[0] == 0)
	{
		free(stash);
		stash = 0;
	}
	return (line);
}

char	*read_and_stash(int fd, char *stash, char *buf, ssize_t bytes_read)
{
	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (free(buf), free(stash), stash = NULL);
	bytes_read = read(fd, buf, BUFFER_SIZE);
	if (bytes_read == 0)
		return (free(buf), stash);
	if (bytes_read < 0)
		return (free(buf), free(stash), stash = NULL);
	buf[bytes_read] = '\0';
	if (!stash)
		stash = ft_strdup_gnl("");
	stash = ft_strjoin_gnl(stash, buf);
	if (!stash)
		return (free(buf), NULL);
	while (ft_strchr_gnl(buf, '\n') == NULL && ft_strchr_gnl(buf, '\0'))
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == 0)
			return (free(buf), stash);
		buf[bytes_read] = '\0';
		stash = ft_strjoin_gnl(stash, buf);
		if (!stash)
			return (free(buf), NULL);
	}
	return (free(buf), stash);
}

char	*extract_line(char *stash)
{
	size_t	i;
	char	*line;

	if (!stash)
		return (NULL);
	i = 0;
	while (stash[i] != '\n' && stash[i] != '\0')
		i++;
	if (stash[i] == '\n')
		i++;
	line = malloc(i + 1);
	if (!line)
		return (NULL);
	line[i] = '\0';
	while (i-- > 0)
		line[i] = stash[i];
	return (line);
}

char	*clean_stash(char *stash)
{
	size_t	i;
	size_t	j;
	char	*rest;

	i = 0;
	while (stash[i] != '\n' && stash[i] != '\0')
		i++;
	j = i;
	while (stash[i])
		i++;
	if (j == i)
		return (stash[0] = 0, stash);
	rest = ft_substr_gnl(stash, j + 1, i);
	if (!rest)
		return (free(stash), stash = 0, NULL);
	return (free(stash), stash = 0, rest);
}
