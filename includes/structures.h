/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguillon <mguillon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 16:26:21 by mguillon          #+#    #+#             */
/*   Updated: 2015/11/17 14:02:02 by mguillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

# include <fcntl.h>
# include <mlx.h>
# include "../libft/libft.h"
# include <unistd.h>
# include <math.h>
# include "../gnl/get_next_line.h"

typedef struct	s_coord
{
	int			x;
	int			y;
}				t_coord;

typedef struct	s_env
{
	void	*mlx;
	void	*win;
	int		**tab;
	int		*nbcases;
	int		nblignes;
	int		win_height;
	int		win_width;
	int		ecart_w;
	int		ecart_h;
	double	centre_x;
	double	centre_y;
}				t_env;

typedef struct	s_expose_hook_param
{
	t_env	*env;
	int		**tab;
}				t_expose_hook_param;

#endif
