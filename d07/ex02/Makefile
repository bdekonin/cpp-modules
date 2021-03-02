# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bdekonin <bdekonin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/02/19 13:09:03 by bdekonin      #+#    #+#                  #
#    Updated: 2021/02/19 13:55:30 by bdekonin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #



SRC = main.cpp
NAME = a.out

# do not touch
FLAGS = -Wall -Werror -Wextra
GCC = clang++
OFILES = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(SRC)
	$(GCC) -o $(NAME) $(FLAGS) $(SRC)

clean:
	rm $(NAME)

fclean:
	rm $(NAME)

re: fclean all