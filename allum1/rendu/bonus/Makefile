##
## Makefile for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Tue Feb  5 18:14:47 2013 louis-philippe baron
## Last update Wed Feb  6 15:26:03 2013 louis-philippe baron
##

SRC=		main.c \
		basics.c \
		check_args.c \
		checks.c \
		display_help.c

OBJ=		$(SRC:.c=.o)

NAME=		allum1

CFLAGS=		-g -Wall -Wextra -ansi -pedantic

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
