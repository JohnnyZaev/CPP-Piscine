NAME	=	Bureaucrat

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror  -std=c++98

HEADERS	=	Bureaucrat.hpp\

SRC		=	main.cpp\
			Bureaucrat.cpp\

OBJS		=	$(patsubst %.cpp, %.o, $(SRC))

all		:	$(NAME)

$(NAME)	:	$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $@

%.o		:	%.cpp $(HEADERS) Makefile
				$(CC) $(CFLAGS) -c $< -o $@

clean	:
				rm -rf $(OBJS)

fclean	:	clean
				rm -rf $(NAME)

re		:	fclean	all

.PHONY	:	all clean fclean re