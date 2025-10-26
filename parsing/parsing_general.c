/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_general.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 11:35:04 by nsmail            #+#    #+#             */
/*   Updated: 2025/10/26 12:53:22 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

int	parsing_general(t_general *g)
{
	if (!recover_map(g))
		return (0);
	return (1);
}

int	recover_map(t_general *g)
{
	char	*line;
	int		fd;
	int		i;
	int		len;

	i = 0;
	len = number_of_line_in_map(g);
	if (len < 6)
		return (printf("invalid map \n"), 0);
	g->parsing_map = malloc(sizeof(char *) * (len + 1));
	if (!g->parsing_map)
		return (printf("malloc -> parsing_map fail\n"), 0);
	fd = open(g->av[1], O_RDONLY);
	if (fd < 0)
		return (0);
	line = get_next_line(fd);
	if (!line)
		return (0);
	while (line)
	{
		if (verif_is_not_empty_line(line))
			g->parsing_map[i++] = ft_strdup(line);
		free(line);
		line = get_next_line(fd);
	}
	g->parsing_map[i] = NULL;
	free(line);
	i = 0;
	while (g->parsing_map[i])
	{
		printf("%s", g->parsing_map[i]);
		i++;
	}
    printf("\n");
	return (1);
}

int	number_of_line_in_map(t_general *g)
{
	int		len;
	int		fd;
	char	*line;

	len = 0;
	fd = open(g->av[1], O_RDONLY);
	if (fd < 0)
		return (0);
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			return (len);
		if (verif_is_not_empty_line(line))
			len++;
	}
	return (len);
}

int	verif_is_not_empty_line(char *line)
{
    while 
    if (ft_isdigit(line[0]))
        return (1);
	else if (line[0] == '\n' || (line[0] >= 9 && line[0] <= 13) || line[0] == ' ')
		return (0);
	return (1);
}
