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

BONUS = get_next_line_bonus.c \
		get_next_line_utils_bonus.c \

OBJ	= ${SRC:%.c=%.o}
BONUS_OBJ = ${BONUS:%.c=%.o}

NAME	= get_next_line.a

CC		= gcc -c
FLAGS	= -Wall -Wextra -Werror

RM		= rm -f

$(NAME):	${OBJ}
			${CC} ${FLAGS} ${SRC}
			ar rc ${NAME} ${OBJ} get_next_line.h

all:		${NAME}

bonus:		${BONUS_OBJ}
			${CC} ${FLAGS} ${BONUS}
			ar rc ${NAME} ${BONUS_OBJ} get_next_line_bonus.h

clean:
			${RM} ${OBJ} ${BONUS_OBJ}
			
fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean bonus re
