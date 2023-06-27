# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spetrov <gyser.petrov.42@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/22 21:27:08 by spetrov           #+#    #+#              #
#    Updated: 2023/04/23 15:01:53 by spetrov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	get_next_line.c \
		get_next_line_utils.c \

OBJ	= ${SRC:%.c=%.o}

NAME	= get_next_line.a

CC		= gcc
FLAGS	= -Wall -Wextra -Werror

RM		= rm -f

$(NAME):	${OBJ}
			${CC} ${FLAGS} -c ${SRC}
			ar rc ${NAME} ${OBJ} get_next_line.h

all:		${NAME}

clean:
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
