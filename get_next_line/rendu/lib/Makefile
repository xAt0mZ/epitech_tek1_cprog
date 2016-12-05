##
## Makefile for lib in /home/baron_l//local/rendu/piscine/projets/get_next_line/rendu/lib
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Mon Nov 19 15:19:02 2012 louis-philippe baron
## Last update Mon Nov 19 17:04:13 2012 louis-philippe baron
##

SRC=		my_putchar.c \
		my_putstr.c \
		my_malloc.c \
		my_strlen.c

OBJ=		$(SRC:.c=.o)

NAME=		libmy.a

all:		compile

compile:	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
