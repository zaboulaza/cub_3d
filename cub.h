/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 09:52:17 by nsmail            #+#    #+#             */
/*   Updated: 2025/10/26 12:32:35 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB_H
# define CUB_H

# include "get_next_line/get_next_line.h"
# include "libft/libft.h"
# include <fcntl.h>
# include <math.h>
# include <mlx.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_general
{
	char	**av;
	char	**parsing_map;
}			t_general;

// ######################## SRC ########################
// ######################## SRC ########################
// main.c
int			main(int ac, char **av);
void		init_structs(t_general *g, char **av);

// ######################## FREE ########################
// ######################## FREE ########################
// free.c
void		free_all(t_general *g);

// ######################## PARSING ########################
// ######################## PARSING ########################
// parsing_general.c
int			parsing_general(t_general *g);
int			recover_map(t_general *g);
int			number_of_line_in_map(t_general *g);
int			verif_is_not_empty_line(char *line);

#endif