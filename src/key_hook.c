/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguillon <mguillon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 16:52:14 by mguillon          #+#    #+#             */
/*   Updated: 2015/02/17 16:05:52 by mguillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	ft_move_around(int keycode, t_expose_hook_param **param)
{
	if (keycode == 65361)
	{
		(*param)->env->centre_x -= 10;
		mlx_clear_window((*param)->env->mlx, (*param)->env->win);
		draw((*param)->env, (*param)->tab);
	}
	if (keycode == 65363)
	{
		(*param)->env->centre_x += 10;
		mlx_clear_window((*param)->env->mlx, (*param)->env->win);
		draw((*param)->env, (*param)->tab);
	}
	if (keycode == 65362)
	{
		(*param)->env->centre_y -= 10;
		mlx_clear_window((*param)->env->mlx, (*param)->env->win);
		draw((*param)->env, (*param)->tab);
	}
	if (keycode == 65364)
	{
		(*param)->env->centre_y += 10;
		mlx_clear_window((*param)->env->mlx, (*param)->env->win);
		draw((*param)->env, (*param)->tab);
	}
}

static void	ft_in_out(int keycode, t_expose_hook_param **param)
{
	if (keycode == 65453)
	{
		(*param)->env->ecart_w = (*param)->env->ecart_w - 1;
		mlx_clear_window((*param)->env->mlx, (*param)->env->win);
		draw((*param)->env, (*param)->tab);
	}
	if (keycode == 65451)
	{
		(*param)->env->ecart_w = (*param)->env->ecart_w + 1;
		mlx_clear_window((*param)->env->mlx, (*param)->env->win);
		draw((*param)->env, (*param)->tab);
	}
}

static void	ft_height(int keycode, t_expose_hook_param **param)
{
	if (keycode == 46)
	{
		(*param)->env->ecart_h = (*param)->env->ecart_h + 1;
		mlx_clear_window((*param)->env->mlx, (*param)->env->win);
		draw((*param)->env, (*param)->tab);
	}
	if (keycode == 44)
	{
		(*param)->env->ecart_h = (*param)->env->ecart_h - 1;
		mlx_clear_window((*param)->env->mlx, (*param)->env->win);
		draw((*param)->env, (*param)->tab);
	}
}

int			key_hook(int keycode, t_expose_hook_param *param)
{
	if (keycode == 65307)
		exit(0);
	if (keycode == 46)
		ft_height(keycode, &param);
	if (keycode == 44)
		ft_height(keycode, &param);
	if (keycode == 65453)
		ft_in_out(keycode, &param);
	if (keycode == 65451)
		ft_in_out(keycode, &param);
	if (keycode == 65361)
		ft_move_around(keycode, &param);
	if (keycode == 65363)
		ft_move_around(keycode, &param);
	if (keycode == 65362)
		ft_move_around(keycode, &param);
	if (keycode == 65364)
		ft_move_around(keycode, &param);
	return (0);
}
