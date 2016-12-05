##
## Makefile for test in /home/baron_l//local/rendu/piscine/projets/get_next_line/rendu
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Mon Nov 19 15:07:13 2012 louis-philippe baron
## Last update Mon Nov 19 17:37:01 2012 louis-philippe baron
##

SRC=		get_next_line.c \
		main.c

OBJ=		$(SRC:.c=.o)

LIB=		-lmy -L ./lib/

INCLUDES=	-I ./lib

CFLAGS=		-g -Wall -ansi -pedantic $(INCLUDES)

LFLAGS=		$(LIB) $(INCLUDES)

all:		compile

compile:	$(OBJ)
		cc $(LIB) $(OBJ) $(LFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f a.out

re:		fclean all
