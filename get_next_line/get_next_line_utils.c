/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 15:49:45 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/23 22:52:10 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen_gnl(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr_gnl(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}

char	*ft_strjoin_gnl(char *s1, const char *s2)
{
	size_t	tailleg;
	size_t	i;
	size_t	j;
	char	*s3;

	if (!s1)
		return (NULL);
	tailleg = ft_strlen_gnl(s1) + ft_strlen_gnl(s2);
	i = 0;
	s3 = malloc(tailleg + 1);
	if (!s3)
		return (free(s1), NULL);
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		s3[i++] = s2[j++];
	s3[i] = '\0';
	free(s1);
	return (s3);
}

char	*ft_strdup_gnl(const char *s)
{
	size_t	tailleg;
	size_t	i;
	char	*sdup;

	i = 0;
	tailleg = ft_strlen_gnl(s);
	sdup = malloc(tailleg + 1);
	if (!sdup)
		return (NULL);
	while (i < tailleg)
	{
		sdup[i] = s[i];
		i++;
	}
	sdup[i] = '\0';
	return (sdup);
}

char	*ft_substr_gnl(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_l;
	char	*str;

	if (!s)
		return (NULL);
	s_l = ft_strlen_gnl(s);
	if (start >= s_l)
		return (ft_strdup_gnl(""));
	if (start + len > s_l)
		str = malloc(s_l - start + 1);
	else
		str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i + start] && i <= len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
