# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bdekonin <bdekonin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/02/19 13:09:03 by bdekonin      #+#    #+#                  #
#    Updated: 2021/05/11 17:46:05 by bdekonin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


SRC		= main.cpp

# output file
NAME	= a.out

# do not touch
CFLAGS	= -Wall -Werror -Wextra
CC		= clang++
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(SRC)
	$(CC) -o $(NAME) $(CFLAGS) $(SRC)

%.o: %.cpp
	$(CC) -o $@ -c  $< $(CFLAGS)

clean:
	/bin/rm $(NAME)

fclean:
	/bin/rm $(NAME)

re: fclean all
