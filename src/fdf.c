/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguillon <mguillon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 16:03:29 by mguillon          #+#    #+#             */
/*   Updated: 2015/11/17 13:57:18 by mguillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "libft.h"

int main(int argc, char **argv)
{
	t_env	env;

	(void)argc;
	if (argc != 2)
		return (1);
	ft_bzero(&env, sizeof(env));
	env.tab = ft_make_table(argv, &env);
	ft_print_map(&env, env.tab);
	return (0);
}
