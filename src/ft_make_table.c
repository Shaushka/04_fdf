/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_table.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguillon <mguillon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 16:04:16 by mguillon          #+#    #+#             */
/*   Updated: 2015/11/17 14:02:05 by mguillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int	ft_freeandmovefwd(char **line, int i)
{
	free(*line);
	i++;
	return (i);
}

static void	ft_alloc_table(int fd, t_env *env, int **tab)
{
	char	*line;
	int		i;

	i = 0;
	while (get_next_line(fd, &line) > 0)
	{
		env->nbcases[i] = ft_count_cases(line);
		tab[i] = malloc(sizeof(int) * ft_count_cases(line));
		ft_strclean_atoi(line, tab[i++]);
		free(line);
	}
}

int			**ft_make_table(char **argv, t_env *env)
{
	int		fd;
	int		i;
	int		**tab;
	char	*line;

	i = 0;
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (NULL);
	while (get_next_line(fd, &line) > 0)
		i = ft_freeandmovefwd(&line, i);
	close(fd);
	tab = malloc(sizeof(int *) * i);
	env->nblignes = i;
	fd = (open(argv[1], O_RDONLY));
	env->nbcases = malloc(sizeof(int) * i);
	ft_alloc_table(fd, env, tab);
	close(fd);
	return (tab);
}
