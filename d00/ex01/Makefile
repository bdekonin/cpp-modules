# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bdekonin <bdekonin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 10:34:22 by bdekonin      #+#    #+#                  #
#    Updated: 2022/02/22 12:25:17 by bdekonin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook

CC			=	clang++
SRCS		=	main.cpp
OFILES		=	$(SRCS:.cpp=.o)
INCLUDES	=	includes

FLAGS		=	-std=c++98 -Wall -Werror -Wextra
RM			=	rm -rf

all:		$(NAME)

$(NAME): $(OFILES) $(HDRS)
	$(CC) $(OFILES) -o $@

%.o: %.cpp %.hpp
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
