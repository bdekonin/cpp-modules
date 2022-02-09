# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bdekonin <bdekonin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/12/04 10:41:38 by bdekonin      #+#    #+#                  #
#    Updated: 2022/02/09 16:53:33 by bdekonin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = a.out

INC = 

SRCS = 	ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

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