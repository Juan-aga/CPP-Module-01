# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-aga <juan-aga@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/01 11:18:40 by juan-aga          #+#    #+#              #
#    Updated: 2023/10/01 11:19:59 by juan-aga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ptr-ref

CC		= c++

CFLAGS	= -Wall -Werror -Wextra -std=c++98

RM		= rm -rf

SRC		= main.cpp

all:		${NAME}

${NAME}:	${SRC}
		${CC} ${CFLAGS} ${SRC} -o ${NAME}

clean:

fclean:	
			${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re bonus
