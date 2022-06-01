NAME	=	Interfaces

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror  -std=c++98 -g3

HEADERS	=	AMateria.hpp\
			Character.hpp\
			Cure.hpp\
			Ice.hpp\
			ICharacter.hpp\
			IMateriaSource.hpp\
			MateriaSource.hpp\

SRC		=	main.cpp\
			AMateria.cpp\
			Character.cpp\
			Cure.cpp\
			Ice.cpp\
			MateriaSource.cpp\

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