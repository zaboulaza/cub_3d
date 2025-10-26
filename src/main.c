/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 10:15:25 by nsmail            #+#    #+#             */
/*   Updated: 2025/10/26 12:12:46 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

int	main(int ac, char **av)
{
	t_general	g;

	if (ac != 2)
		return (1);
	init_structs(&g, av);
	if (!parsing_general(&g))
	{
		free_all(&g);
		printf("error parsing\n");
		return (0);
	}
	printf("cub3D: test main OK\n");
	return (0);
}

void	init_structs(t_general *g, char **av)
{
	g = ft_memset(g, 0, sizeof(t_general));
	g->av = av;
}
