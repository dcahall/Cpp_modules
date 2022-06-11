# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 18:52:31 by dcahall           #+#    #+#              #
#    Updated: 2022/06/09 11:27:46 by dcahall          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	canonForm

INCLUDE			=	./

SRC_PATH		= 	./

SRCS			=	main.cpp Fixed.cpp

ALL_SRCS		=	$(addprefix $(SRC_PATH), $(SRCS))

HEADER			=	$(addprefix $(INCLUDE), Fixed.hpp)

OBJ				=	$(ALL_SRCS:.cpp=.o)

CC				=	g++

RM				=	rm -f

CFLAGS			= 	-Wall -Wextra -Werror -std=c++98 -I$(INCLUDE)

.PHONY			:	all clean fclean re bonus

all				:	$(NAME) 

$(NAME)			:	$(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o				:	%.cpp $(HEADER)
	$(CC) $(CFLAGS) -c -g $< -o $@
	
clean			:
	$(RM) $(OBJ) 

fclean			:	clean
	$(RM) $(NAME)

re				:	fclean all
