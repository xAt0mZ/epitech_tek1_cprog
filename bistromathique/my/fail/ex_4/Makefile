##
## Makefile for infin_add in /exam//rendu/ex_4
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Thu Nov  8 09:25:56 2012 louis-philippe baron
## Last update Fri Nov  9 18:13:50 2012 louis-philippe baron
##

SRC=		main.c \
		addition.c \
		subtraction.c \
		functions.c \
		clean_numbers.c \
		epur_str.c

OBJ=		$(SRC:.c=.o)

NAME=		infin_add

CFLAGS=		-g

all:		compile

compile:	$(OBJ)
		cc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
		clean