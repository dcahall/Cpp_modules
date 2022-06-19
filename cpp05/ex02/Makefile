# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcahall <dcahall@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 18:52:31 by dcahall           #+#    #+#              #
#    Updated: 2022/06/18 17:17:53 by dcahall          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME			=	form28b

# INCLUDE			=	./

# SRC_PATH		= 	./

# SRCS			=	main.cpp					Bureaucrat.cpp\
# 					PresidentialPardonForm.cpp	RobotomyRequestForm.cpp\
# 					ShrubberyCreationForm.cpp	Form.cpp

# ALL_SRCS		=	$(addprefix $(SRC_PATH), $(SRCS))

# HEADER			=	$(addprefix $(INCLUDE), Bureaucrat.hpp Form.hpp\
# 					PresidentialPardonForm.hpp ShrubberyCreationForm.hpp\
# 					RobotomyRequestForm.hpp)

# OBJ				=	$(ALL_SRCS:.cpp=.o)

# CC				=	c++

# RM				=	rm -f

# CFLAGS			= 	-Wall -Wextra -Werror -std=c++98 -I$(INCLUDE)

# .PHONY			:	all clean fclean re bonus

# all				:	$(NAME) 

# $(NAME)			:	$(OBJ) $(HEADER)
# 	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

# %.o				:	%.cpp $(HEADER)
# 	$(CC) $(CFLAGS) -c -g $< -o $@
	
# clean			:
# 	$(RM) $(OBJ) 

# fclean			:	clean
# 	$(RM) $(NAME)

# re				:	fclean all

NAME		=	form

INCLUDE		=	./

SRC_PATH	=	./

HEADER		=	$(addprefix $(INCLUDE),\
					Bureaucrat.hpp				Form.hpp\
					PresidentialPardonForm.hpp	RobotomyRequestForm.hpp\
					ShrubberyCreationForm.hpp)

SRC			=	$(addprefix $(SRC_PATH),\
					Bureaucrat.cpp				Form.cpp\
					PresidentialPardonForm.cpp	RobotomyRequestForm.cpp\
					ShrubberyCreationForm.cpp	main.cpp)

OBJ			=	$(SRC:.cpp=.o)

CC			=	g++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -I$(INCLUDE)

.PHONY		=	all clean flcean re

all			:	$(NAME)

$(NAME)		:	$(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o			:	%.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean		:
	$(RM) $(OBJ)

fclean		:	clean
	$(RM) $(NAME)

re			: fclean all