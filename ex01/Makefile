# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan-aga <juan-aga@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/01 00:39:38 by juan-aga          #+#    #+#              #
#    Updated: 2023/10/01 10:38:45 by juan-aga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	horde

CC			=	c++

CFLAGS		=	-Wall -Werror -Wextra -std=c++98 -D DEBUG=$(DEBUG) $(INCLUDES)

ifdef DEBUG
	DEBUG	=	1
else
	DEBUG	=	0
endif

RM			=	rm -rf

SRC_DIR		=	src/

OBJ_DIR		=	obj/

F_SRC		=	main.cpp		\
				Zombie.cpp		\
				zombieHorde.cpp

SRC			=	${addprefix $(SRC_DIR), $(F_SRC)}

OBJ			=	${patsubst $(SRC_DIR)%.cpp, $(OBJ_DIR)%.opp, $(SRC)}

INCLUDES	=	-I./include/

all:		${NAME}

${NAME}:	$(HEADERS) ${OBJ}
			${CC} ${CFLAGS} ${OBJ} -o ${NAME}

$(OBJ_DIR)%.opp: $(SRC_DIR)%.cpp
			mkdir -p $(OBJ_DIR)
			$(CC) $(CFLAGS) -c $^ -o $@

debug:
			make re DEBUG=1

clean: 
			$(RM) $(OBJ_DIR)

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus