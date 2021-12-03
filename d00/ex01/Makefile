# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bdekonin <bdekonin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 10:34:22 by bdekonin      #+#    #+#                  #
#    Updated: 2021/12/03 12:06:56 by bdekonin      ########   odam.nl          #
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
	$(CXX) $(FLAGS) -o $@ -c $<

clean:
	rm -f $(OFILES)
	echo "Removed $(OFILES)"

fclean: clean
	rm -f $(NAME)
	echo "[INFO] Removed $(NAME)"

re: fclean all

.PHONY: all clean fclean re
