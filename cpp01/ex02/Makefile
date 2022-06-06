# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 18:52:31 by dcahall           #+#    #+#              #
#    Updated: 2022/06/06 21:28:31 by dcahall          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	reference

INCLUDE			=	./

SRC_PATH		= 	./

SRCS			=	main.cpp

ALL_SRCS		=	$(addprefix $(SRC_PATH), $(SRCS))

OBJ				=	$(ALL_SRCS:.cpp=.o)

CC				=	g++

RM				=	rm -f

CFLAGS			= 	-Wall -Wextra -Werror -std=c++98

.PHONY			:	all clean fclean re bonus

all				:	$(NAME) 

$(NAME)			:	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o				:	%.cpp
	$(CC) $(CFLAGS) -c $< -o $@
	
clean			:
	$(RM) $(OBJ) 

fclean			:	clean
	$(RM) $(NAME)

re				:	fclean all
