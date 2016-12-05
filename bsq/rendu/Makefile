##
## Makefile for bsq in /home/baron_l//local/rendu/piscine/projets/bsq/rendu
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Tue Dec  4 09:20:53 2012 louis-philippe baron
## Last update Tue Dec  4 15:04:45 2012 louis-philippe baron
##

SRC=		main.c \
		bsq.c \
		basics.c \
		get_next_line.c \
		freeall.c \
		get_file.c \
		sort_wdtb.c \
		find_square.c \
		check_validity.c


OBJ=		$(SRC:.c=.o)

CFLAGS=		-g -Wall -Wextra -ansi -pedantic

NAME=		bsq

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
