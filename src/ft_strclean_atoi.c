/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclean_atoi.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguillon <mguillon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 16:04:50 by mguillon          #+#    #+#             */
/*   Updated: 2015/02/20 15:51:52 by mguillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdio.h>

int		ft_atoitilnotdigit(char *str, int i, int sign, int *pos)
{
	int	n;

	n = 0;
	while (ft_isdigit(str[i]))
		n = n * 10 + (str[i++] - '0');
	n = n * sign;
	*pos = n;
	return (i);
}

void	ft_strclean_atoi(char *str, int *ligne_du_tableau)
{
	int	i;
	int	sign;
	int	pos;

	pos = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ',')
			i += 2;
		if (!ft_isdigit(str[i]) && str[i] != '-')
			i++;
		sign = 1;
		if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
		if (ft_isdigit(str[i]))
		{
			i = ft_atoitilnotdigit(str, i, sign, &ligne_du_tableau[pos]);
			pos++;
		}
	}
}
