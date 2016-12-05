##
## Makefile for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique/baron_l/ops/try_2
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Fri Nov  9 19:41:08 2012 louis-philippe baron
## Last update Sun Nov 11 18:38:08 2012 louis-philippe baron
##

SRC=		functions.c \
		main.c \
		addition.c \
		clean_res.c \
		swap.c \
		epur_str.c \
		subtraction.c \
		neg_add_sub.c \
		multiplication.c \
		div_mod.c

OBJ=		$(SRC:.c=.o)

CFLAGS=		-g -Wall -ansi -pedantic

NAME=		calcul

all:		compile

compile:	$(OBJ)
		cc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
		clean
