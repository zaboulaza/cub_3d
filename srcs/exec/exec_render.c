/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_render.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 20:30:00 by assistant         #+#    #+#             */
/*   Updated: 2025/11/05 22:37:14 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

void	render_column(t_alldata *data, int x)
{
	t_bounds	b;
	t_tex_info	t;
	char		wall_side;

	b = calc_bounds(data);
	wall_side = choose_wall_side_local(data);
	t = get_tex_meta(data, wall_side);
	if (t.addr == NULL || t.w <= 0 || t.h <= 0)
		return ;
	compute_tex_x(data, &t);
	draw_textured_column(data, x, &b, &t);
}
