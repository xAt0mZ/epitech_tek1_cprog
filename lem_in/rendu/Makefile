##
## Makefile for lem_in in /home/baron_l//local/rendu/projets/c_prog_elem/lem_in/rendu
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Wed Apr 10 10:34:00 2013 louis-philippe baron
## Last update Wed Apr 10 11:12:51 2013 louis-philippe baron
##

SRC=		main.c \
		basics.c \
		get_file.c \
		get_next_line.c \
		show_tab.c \
		free_tab.c

OBJ=		$(SRC:.c=.o)

NAME=		lem_in

CFLAGS=		-g -Wall -Wextra -ansi -pedantic

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
