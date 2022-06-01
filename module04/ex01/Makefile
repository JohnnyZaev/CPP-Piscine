NAME	=	Brain

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror  -std=c++98

HEADERS	=	Animal.hpp\
			Cat.hpp\
			Dog.hpp\
			WrongAnimal.hpp\
			WrongCat.hpp\
			Brain.hpp\

SRC		=	main.cpp\
			Animal.cpp\
			Cat.cpp\
			Dog.cpp\
			WrongAnimal.cpp\
			WrongCat.cpp\
			Brain.cpp\

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