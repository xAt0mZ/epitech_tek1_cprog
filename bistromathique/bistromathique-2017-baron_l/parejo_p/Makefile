##
## Makefile for Makefile in /home/parejo_p//eval_expr
## 
## Made by pelayo parejopagador
## Login   <parejo_p@epitech.net>
## 
## Started on  Fri Oct 26 11:02:19 2012 pelayo parejopagador
## Last update Sat Nov 10 19:36:49 2012 pelayo parejopagador
##

LIB=		/afs/epitech.net/users/epitech_2017/parejo_p/rendu/lib/

SRC=		main.c \
		my_check_list.c \
		count.c \
		copy.c \
		my_double_link_list.c \
		my_putstr.c \
		my_putchar.c \
		xmalloc.c \
		my_strdup.c \

OBJ=		$(SRC:.c=.o)

CFLAGS=		-g -Wall -ansi -pedantic

NAME=		list

all:		compile

compile:	$(OBJ)
		@gcc $(OBJ) -o $(NAME)

clean:
		@rm -f	$(OBJ)

fclean:		clean
		@rm -f	$(NAME)

re:		fclean all