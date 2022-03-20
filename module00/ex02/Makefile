# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gvarys <gvarys@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 12:39:54 by gvarys            #+#    #+#              #
#    Updated: 2022/03/20 15:51:55 by gvarys           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	dream_job

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror  -std=c++98

SRC		=	tests.cpp\
			Account.cpp

OBJS		=	$(patsubst %.cpp, %.o, $(SRC))

all		:	$(NAME)

$(NAME)	:	$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $@

%.o		:	%.cpp
				$(CC) $(CFLAGS) -c $< -o $@

clean	:
				rm -rf $(OBJS)

fclean	:	clean
				rm -rf $(NAME)

re		:	fclean	all

.PHONY	:	all clean fclean re