/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguillon <mguillon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/16 18:10:10 by mguillon          #+#    #+#             */
/*   Updated: 2015/02/17 16:23:30 by mguillon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include "../libft/libft.h"

# define BUF_SIZE ((unsigned int)8)

int						get_next_line(int const fd, char **line);

typedef struct			s_buffer
{
	int					fd;
	char				str[(unsigned int)BUF_SIZE + 1];
	size_t				cursor;
	ssize_t				size;
}						t_buffer;

#endif
