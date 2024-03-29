# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-aga <juan-aga@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/01 11:56:44 by juan-aga          #+#    #+#              #
#    Updated: 2023/10/02 11:52:30 by juan-aga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	weapons

CC			=	c++

CFLAGS		=	-Wall -Werror -Wextra -std=c++98 -D DEBUG=$(DEBUG) $(INCLUDES)

RM			=	rm -rf

SRC_DIR		=	src/

OBJ_DIR		=	obj/

F_SRC		=	main.cpp	\
				Weapon.cpp	\
				HumanA.cpp	\
				HumanB.cpp

SRC			=	${addprefix $(SRC_DIR), $(F_SRC)}

OBJ			=	${patsubst $(SRC_DIR)%.cpp, $(OBJ_DIR)%.opp, $(SRC)}

INCLUDES	=	-I./include/

HEADERS		=	include/Weapon.hpp	\
				include/HumanA.hpp	\
				include/HumanB.hpp

ifdef DEBUG
	DEBUG	=	1
else
	DEBUG	=	0
endif

UNAME_S		:= $(shell uname -s)

ifeq ($(UNAME_S), Darwin)
		LEAKS = @leaks -q -atExit -- ./${NAME}
else
		LEAKS = @echo "Can't use leaks in" ${UNAME_S}.
endif

all:		${NAME}

${NAME}:	$(HEADERS) ${OBJ}
			${CC} ${CFLAGS} ${OBJ} -o ${NAME}

$(OBJ_DIR)%.opp: $(SRC_DIR)%.cpp
			mkdir -p $(OBJ_DIR)
			$(CC) $(CFLAGS) -c $^ -o $@

debug:
			make re DEBUG=1

leaks:		${NAME}
			${LEAKS}

clean: 
			$(RM) $(OBJ_DIR)

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus
