# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 18:52:31 by dcahall           #+#    #+#              #
#    Updated: 2022/06/25 19:00:15 by dcahall          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	mutantStack

INCLUDE			=	./

SRC_PATH		= 	./

SRCS			=	main.cpp 

ALL_SRCS		=	$(addprefix $(SRC_PATH), $(SRCS))

HEADER			=	$(addprefix $(INCLUDE), mutantStack.hpp mutantStack.tpp)

OBJ				=	$(ALL_SRCS:.cpp=.o)

CC				=	c++

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
