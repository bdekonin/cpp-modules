# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bdekonin <bdekonin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/12/04 10:41:38 by bdekonin      #+#    #+#                  #
#    Updated: 2022/02/19 17:32:09 by bdekonin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = a.out

INC = 

SRCS = main.cpp	AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OBJS = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

all : $(NAME) 

%.o : %.cpp $(INC)
	clang++ -c $(CFLAGS) $< -o $(<:.cpp=.o) -g

$(NAME) : $(OBJS)
	clang++ $(CFLAGS) -o ${NAME} $(OBJS)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
.PHONY : all clean fclean re