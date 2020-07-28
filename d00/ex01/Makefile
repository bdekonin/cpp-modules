# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bdekonin <bdekonin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 10:34:22 by bdekonin      #+#    #+#                  #
#    Updated: 2020/07/28 12:30:50 by bdekonin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME = phonebook

SRCS = phonebook.cpp addContacts.cpp showContacts.cpp

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm $(NAME)

fclean:
	rm $(NAME)

re: fclean all
