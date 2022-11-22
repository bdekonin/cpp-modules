# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bdekonin <bdekonin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 10:34:22 by bdekonin      #+#    #+#                  #
#    Updated: 2021/12/02 18:48:47 by bdekonin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

CC			=	clang++
SRCS		=	megaphone.cpp
INCLUDES	=	includes
FLAGS		=	-std=c++98 -Wall -Werror -Wextra
RM			=	rm -rf

all:		$(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -f $(OFILES)
	@echo "Removed $(OFILES)"

fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] Removed $(NAME)"

re: fclean all

.PHONY: all clean fclean re