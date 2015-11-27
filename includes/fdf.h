/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguillon <mguillon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 16:02:20 by mguillon          #+#    #+#             */
/*   Updated: 2015/11/17 14:02:00 by mguillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <fcntl.h>
# include <mlx.h>
# include "../libft/libft.h"
# include <unistd.h>
# include "../gnl/get_next_line.h"
# include <math.h>
# include "structures.h"

t_coord	coord(int x, int y, int z);
void	ft_calc_win(t_env *env, int **tab);
int		ft_count_cases(char *str);
int		ft_color(int z);
void	draw_line(t_env *env, t_coord a, t_coord b, unsigned int color);
int		ft_atoitilnotdigit(char *str, int i, int sign, int *pos);
void	ft_strclean_atoi(char *str, int *ligne_du_tableau);
int		**ft_make_table(char **argv, t_env *env);
void	ft_print_map(t_env *env, int **tab);
void	ft_pixel_put(t_env *env, t_coord coord, unsigned int color);
int		expose_hook(t_expose_hook_param *param);
void	draw(t_env *env, int **tab);
int		key_hook(int keycode, t_expose_hook_param *param);
#endif
