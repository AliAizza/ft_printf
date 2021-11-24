# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 00:44:11 by aaizza            #+#    #+#              #
#    Updated: 2021/11/24 01:21:40 by aaizza           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c ft_putad.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putstr.c ft_putuns.c

OBJ = ${SRC:.c=.o}

NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

all:		${NAME}

${NAME}:
			${CC} ${FLAGS} -c ${SRC}
			ar -rc ${NAME} ${OBJ}

clean:
			rm -f ${OBJ}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re