##
## Makefile for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Wed Oct 31 17:45:54 2012 louis-philippe baron
## Last update Thu Nov  1 19:43:42 2012 louis-philippe baron
##

SRC=		main.c \
		eval_expr.c \
		checks_for_syntax_errors.c \
		checks_for_syntax_errors_2.c \
		functions.c

OBJ=		$(SRC:.c=.o)

CFLAGS=		-Wall -ansi -pedantic

NAME=		calc

all:		compile

compile:	$(OBJ)
		cc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
