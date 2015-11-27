/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguillon <mguillon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 16:03:11 by mguillon          #+#    #+#             */
/*   Updated: 2015/02/17 16:03:12 by mguillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdio.h>

void	draw(t_env *env, int **tab)
{
	int color;
	int l;
	int c;

	l = 0;
	while (l < env->nblignes)
	{
		c = 0;
		while (c < env->nbcases[l])
		{
			color = ft_color(tab[l][c]);
			if (c < env->nbcases[l] - 1)
				draw_line(env, coord(c * env->ecart_w, l * env->ecart_w,
				tab[l][c] * env->ecart_h), coord((c + 1) * env->ecart_w,
				l * env->ecart_w, tab[l][c + 1] * env->ecart_h), color);
			if (l > 0 && c < env->nbcases[l - 1])
				draw_line(env, coord(c * env->ecart_w, l * env->ecart_w,
				tab[l][c] * env->ecart_h), coord(c * env->ecart_w,
				(l - 1) * env->ecart_w, tab[l - 1][c] * env->ecart_h), color);
			c++;
		}
		l++;
	}
}
