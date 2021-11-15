# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bdekonin <bdekonin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/02/19 13:09:03 by bdekonin      #+#    #+#                  #
#    Updated: 2021/09/20 08:27:01 by bdekonin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex02
SRC = main.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98

all: re

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean: fclean

fclean:
	@/bin/rm -f $(NAME)

re: fclean $(NAME)

test: re
	@./$(NAME)
