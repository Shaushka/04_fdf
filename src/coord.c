/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coord.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguillon <mguillon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 18:15:17 by mguillon          #+#    #+#             */
/*   Updated: 2015/02/17 16:03:00 by mguillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_coord coord(int x, int y, int z)
{
	t_coord coord;

	coord.x = (0.82 * x) - (0.82 * y);
	coord.y = -z + (0.41 * x) + (0.41 * y);
	return (coord);
}