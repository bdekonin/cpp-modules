# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bdekonin <bdekonin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/12/03 13:05:29 by bdekonin      #+#    #+#                  #
#    Updated: 2021/12/03 20:57:54 by bdekonin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME = a.out

INC = 

SRCS = 	main.cpp

OBJS = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME) 

%.o : %.cpp $(INC)
	c++ -c $(CFLAGS) $< -o $(<:.cpp=.o) -g

$(NAME) : $(OBJS)
	c++ $(CFLAGS) -o ${NAME} $(OBJS)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
.PHONY : all clean fclean re