##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

### Colors
RED 	=	\033[31m
GREEN	=	\033[32m
BLUE 	=	\033[34m
RESET	=	\033[0m
###

COMP =	ar rc

RM =	rm -f

SRC =		$(wildcard my/*.c)
SRC +=		$(wildcard string/*.c)
SRC +=		$(wildcard math/*.c)
SRC +=		$(wildcard info/*.c)
SRC +=		$(wildcard display/*.c)

OBJ	=		$(SRC:.c=.o)

NAME =		libmy.a

NAME_H =	include/my*.h

CFLAGS +=	-Wall -Wextra

all:		$(NAME) copy
			@echo -e "$(GREEN)------------------------$(RESET)"
			@echo -e "$(GREEN)|$(BLUE) LIB COMPILATION DONE $(GREEN)|$(RESET)"
			@echo -e "$(GREEN)------------------------$(RESET)"

debug:		CFLAGS += -g
debug:		re

$(NAME):	$(OBJ)
			$(COMP) $(NAME) $(OBJ)
			ranlib $(NAME)

copy:
			cp $(NAME_H) ../../include
			cp $(NAME) ../

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME) ../$(NAME) ../../include/$(NAME_H)

re:			fclean all

.PHONY:	all debug copy clean fclean re
