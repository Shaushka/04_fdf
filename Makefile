# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mguillon <mguillon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/17 16:02:01 by mguillon          #+#    #+#              #
#    Updated: 2015/02/17 17:11:37 by mguillon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRC =./src/calc_x.c \
	 ./src/calc_y.c \
	 ./src/coord.c \
	 ./src/draw.c \
	 ./src/draw_line.c \
	 ./src/expose_hook.c \
	 ./src/fdf.c \
	 ./src/ft_calc_win.c \
	 ./src/ft_color.c \
	 ./src/ft_count_cases.c \
	 ./src/ft_make_table.c \
	 ./src/ft_pixel_put.c \
	 ./src/ft_print_map.c \
	 ./src/ft_strclean_atoi.c \
	 ./src/key_hook.c\

OBJ = $(SRC:.c=.o)

CFLAGS += -Wall -Wextra -Werror -I libft/ -I gnl/ -I minilibx/ -I includes/

all: $(NAME)

gnl/libgnl.a: gnl/get_next_line.o
	$(AR) -rcs $@ $^

libft/libft.a:
	$(MAKE) -C libft/

$(NAME): $(OBJ) gnl/libgnl.a libft/libft.a
	$(CC) $(CFLAGS) -L libft/ -L/usr/X11/lib -L gnl/ -lgnl -lft -lmlx -lXext -lX11 -o $@ $(OBJ)

clean:
	@$(MAKE) -C libft/ clean
	@rm -f $(OBJ)
	@rm -f gnl/get_next_line.o

fclean: clean
	@$(MAKE) -C libft/ fclean
	@rm -f gnl/libgnl.a
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re libft/libft.a
