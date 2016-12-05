##
## Makefile for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique/baron_l/ops/try_2
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Fri Nov  9 19:41:08 2012 louis-philippe baron
## Last update Sat Nov 10 17:32:03 2012 louis-philippe baron
##

SRC=		functions.c \
		main.c \
		addition.c \
		clean_res.c \
		swap.c \
		epur_str.c

OBJ=		$(SRC:.c=.o)

CFLAGS=		-g

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
