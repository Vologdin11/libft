# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjerrica <mjerrica@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/19 19:30:55 by mjerrica          #+#    #+#              #
#    Updated: 2021/04/26 19:27:41 by mjerrica         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= libft.a
FLAGS	= -Wall -Werror -Wextra
CFLAGS	= $(FLAGS) -I.
CC		= gcc
NORMIN	= norminette
SRC		= $(wildcard src/*.c)
OBJ		= $(SRC:%.c=%.o)

.PHONY: all clean fclean re norm

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $?
	ranlib $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
	$(NORMIN) -R CheckForbiddenSourceHeader $(SRC)
	$(NORMIN) libft.h