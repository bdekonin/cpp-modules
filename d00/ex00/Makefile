# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bdekonin <bdekonin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 10:34:22 by bdekonin      #+#    #+#                  #
#    Updated: 2020/07/30 20:16:51 by bdekonin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME = megaphone

SRCS = megaphone.cpp

OFILES = $(SRCS:.cpp=.o)

FLAGS = -std=c++98 -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OFILES)
	@clang++ $(OFILES) -o $@

%.o: %.cpp
	clang++ $(FLAGS) -o $@ -c $<

clean:
	@rm -f $(OFILES)
	@echo "Removed $(OFILES)"

fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] Removed $(NAME)"

re: fclean all

.PHONY: all clean fclean re

