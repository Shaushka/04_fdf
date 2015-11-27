/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguillon <mguillon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 17:08:04 by mguillon          #+#    #+#             */
/*   Updated: 2015/02/17 16:07:18 by mguillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_k1(t_env *env, t_coord a, t_coord b, unsigned int color)
{
	int x;

	x = a.x;
	while (x <= b.x)
	{
		if (b.x - a.x)
		{
			ft_pixel_put(env, (t_coord){env->centre_x + x, env->centre_y + a.y
					+ ((b.y - a.y) * (x - a.x)) / (b.x - a.x)}, color);
		}
		x++;
	}
}

void	ft_k2(t_env *env, t_coord a, t_coord b, unsigned int color)
{
	int y;

	y = a.y;
	while (y <= b.y)
	{
		if (b.y - a.y)
		{
			ft_pixel_put(env, (t_coord){a.x + env->centre_x + ((b.x - a.x) *
						(y - a.y)) / (b.y - a.y), env->centre_y + y}, color);
		}
		y++;
	}
}

void	draw_line(t_env *env, t_coord a, t_coord b, unsigned int color)
{
	if (a.x <= b.x && (b.x - a.x) >= abs(b.y - a.y))
		ft_k1(env, a, b, color);
	else if (a.x > b.x && abs(b.x - a.x) >= abs(b.y - a.y))
		ft_k1(env, b, a, color);
	else if (a.y <= b.y && (b.y - a.y) >= abs(b.x - a.x))
		ft_k2(env, a, b, color);
	else if (a.y > b.y && abs(b.y - a.y) >= abs(b.x - a.x))
		ft_k2(env, b, a, color);
}
