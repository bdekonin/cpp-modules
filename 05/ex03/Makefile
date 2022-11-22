NAME	=	ex03

CC		=	clang++
CFLAGS	=	-Wall -Werror -Wextra -std=c++98 -pedantic
UNUSED	=	-Wno-unused-variable -Wno-unused-parameter -Wno-unused-function -Wno-unused-private-field

SDIR	=	src
ODIR	=	obj
IDIR	=	inc

CLASSES	=	Bureaucrat Form ShrubberyCreationForm RobotomyRequestForm PresidentialPardonForm Intern

_OBJS	=	main $(CLASSES)
OBJS	=	$(addsuffix .o, $(addprefix $(ODIR)/, $(_OBJS)))
HEADERS	=	$(addsuffix .hpp, $(addprefix $(IDIR)/, $(CLASSES)))

ifeq ($(DEBUG),1)
	CFLAGS += -fsanitize=address -g3
endif

.PHONY: all clean fclean re debug test

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(ODIR)/%.o: $(SDIR)/%.cpp $(HEADERS)
	@mkdir -p $(ODIR)
	$(CC) $(CFLAGS) -I$(IDIR) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(RM) *.dSYM

fclean: clean
	$(RM) $(NAME)
	$(RM) *_shrubbery
	rm -rf obj

re: fclean all

debug:
	@make DEBUG=1

test: all
	clear
	./$(NAME)
