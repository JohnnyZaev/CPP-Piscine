# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gvarys <gvarys@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 12:39:54 by gvarys            #+#    #+#              #
#    Updated: 2022/03/23 16:58:57 by gvarys           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	violence

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror  -std=c++98

HEADERS	=	Weapon.h\
			HumanA.h\
			HumanB.h\

SRC		=	main.cpp\
			Weapon.cpp\
			HumanA.cpp\
			HumanB.cpp\

OBJS		=	$(patsubst %.cpp, %.o, $(SRC))

all		:	$(NAME)

$(NAME)	:	$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $@

%.o		:	%.cpp $(HEADERS)
				$(CC) $(CFLAGS) -c $< -o $@

clean	:
				rm -rf $(OBJS)

fclean	:	clean
				rm -rf $(NAME)

re		:	fclean	all

.PHONY	:	all clean fclean re