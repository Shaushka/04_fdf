/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguillon <mguillon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 16:04:40 by mguillon          #+#    #+#             */
/*   Updated: 2015/02/17 16:04:41 by mguillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdio.h>

void	ft_print_map(t_env *env, int **tab)
{
	t_expose_hook_param	param;

	env->mlx = mlx_init();
	ft_calc_win(env, tab);
	env->win = mlx_new_window(env->mlx, env->win_width, env->win_height, "42");
	param.env = env;
	param.tab = tab;
	mlx_key_hook(env->win, key_hook, &param);
	mlx_expose_hook(env->win, expose_hook, &param);
	mlx_loop(env->mlx);
}
