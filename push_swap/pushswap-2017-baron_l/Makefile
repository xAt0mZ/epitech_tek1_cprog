##
## Makefile for push_swap in /home/baron_l//local/rendu/projets/c_prog_elem/push_swap/rendu
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Wed Dec 19 10:11:47 2012 louis-philippe baron
## Last update Sun Jan  6 20:38:21 2013 louis-philippe baron
##

SRC=		main.c \
		basics.c \
		check_validity.c \
		check_max.c \
		linked_list.c \
		free_list.c \
		show_list.c \
		push_swap.c \
		give_weight.c \
		rev_list.c \
		sort_list.c \
		push_list.c \
		rotate_list.c

OBJ=		$(SRC:.c=.o)

CFLAGS=		-g -Wall -Wextra -ansi -pedantic

NAME=		push_swap

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
