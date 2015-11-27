/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_cases.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguillon <mguillon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 16:04:07 by mguillon          #+#    #+#             */
/*   Updated: 2015/02/17 16:04:08 by mguillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int ft_count_cases(char *str)
{
	int	i;
	int nombredecases;

	nombredecases = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ',')
			i += 2;
		if (!ft_isdigit(str[i]))
			i++;
		if (ft_isdigit(str[i]))
		{
			nombredecases++;
			while (ft_isdigit(str[i]))
				i++;
		}
	}
	return (nombredecases);
}
