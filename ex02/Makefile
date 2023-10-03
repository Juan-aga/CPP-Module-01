# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-aga <juan-aga@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/01 11:18:40 by juan-aga          #+#    #+#              #
#    Updated: 2023/10/02 11:54:11 by juan-aga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ptr-ref

CC		= c++

CFLAGS	= -Wall -Werror -Wextra -std=c++98

RM		= rm -rf

SRC		= main.cpp

all:		${NAME}

UNAME_S		:= $(shell uname -s)

ifeq ($(UNAME_S), Darwin)
		LEAKS = @leaks -q -atExit -- ./${NAME}
else
		LEAKS = @echo "Can't use leaks in" ${UNAME_S}.
endif

${NAME}:	${SRC}
		${CC} ${CFLAGS} ${SRC} -o ${NAME}

leaks:		${NAME}
			${LEAKS}
clean:

fclean:	
			${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re bonus
