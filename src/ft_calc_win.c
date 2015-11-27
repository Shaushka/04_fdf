/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_win.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguillon <mguillon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 17:52:25 by mguillon          #+#    #+#             */
/*   Updated: 2015/03/17 14:22:15 by mguillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdio.h>
#include <math.h>

void ft_calc_win(t_env *env, int **tab)
{
	t_coord mid;

	if (env->nblignes < 50)
	{
		env->ecart_w = 25;
		env->ecart_h = 5;
		env->win_width = 800;
		env->win_height = 800;
		env->centre_x = 300;
		env->centre_y = 300;
	}
	else
	{
		env->ecart_w = 7;
		env->ecart_h = 2;
		env->win_width = 1.3 * (env->ecart_w * (sqrt(pow(*(env->nbcases), 2) +
			pow(env->nblignes, 2))));
		env->win_height = 1.3 * env->nblignes * 15;
		mid = coord((*(env->nbcases) * 15) / 2, (env->nblignes * 15) / 2,
			tab[env->nblignes / 2][*(env->nbcases) / 2] * 2);
		env->centre_x = env->win_width / 2 - mid.x / 3;
		env->centre_y = env->win_height / 2 - mid.y;
	}
}
