# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/03 16:04:57 by dcahall           #+#    #+#              #
#    Updated: 2022/06/04 17:38:44 by dcahall          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	phonebook

INCLUDE			=	./

SRC_PATH		= 	./

SRCS			=	main.cpp Contact.cpp PhoneBook.cpp

ALL_SRCS		=	$(addprefix $(SRC_PATH), $(SRCS))

HEADER			=	$(addprefix $(INCLUDE), Contact.hpp PhoneBook.hpp)

OBJ				=	$(ALL_SRCS:.cpp=.o)

CC				=	g++

RM				=	rm -f

CFLAGS			= 	-Wall -Wextra -Werror -std=c++98 -I$(INCLUDE)

.PHONY			:	all clean fclean re bonus

all				:	$(NAME) 

$(NAME)			:	$(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o				:	%.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@
	
clean			:
	$(RM) $(OBJ) 

fclean			:	clean
	$(RM) $(NAME)

re				:	fclean all
