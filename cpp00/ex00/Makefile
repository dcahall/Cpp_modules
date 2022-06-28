# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/03 12:33:34 by dcahall           #+#    #+#              #
#    Updated: 2022/06/28 19:27:18 by dcahall          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

SRCS		=	./megaphone.cpp

OBJ			=	$(patsubst %.cpp, %.o, $(SRCS) )

CC			=	c++

RM			=	rm -f

CFLAGS		= 	-Wall -Wextra -Werror -std=c++98

.PHONY		:	all clean fclean re bonus

all			:	$(NAME)

$(NAME)		:	$(OBJ)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

%.o			:	%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

test		: 	$(NAME)
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone
	
clean		:
	$(RM) $(OBJ) 

fclean		:	clean
	$(RM) $(NAME)

re			:	fclean all