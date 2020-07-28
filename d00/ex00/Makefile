# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bdekonin <bdekonin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 10:34:22 by bdekonin      #+#    #+#                  #
#    Updated: 2020/07/28 12:31:14 by bdekonin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME = megaphone

SRCS = megaphone.cpp

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm megaphone

fclean:
	rm megaphone

re: fclean all
