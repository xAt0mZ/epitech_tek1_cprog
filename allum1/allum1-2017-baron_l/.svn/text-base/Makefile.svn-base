##
## Makefile for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Wed Feb  6 15:27:27 2013 louis-philippe baron
## Last update Tue Feb 12 10:11:15 2013 louis-philippe baron
##

SRC=		main.c \
		basics.c \
		fill_map.c \
		get_map.c \
		show_map.c \
		free_map.c \
		is_the_end.c \
		play.c \
		get_next_line.c \
		check_line.c \
		check_content.c \
		line_selection.c \
		check_match.c \
		match_selection.c \
		delete_matches.c \
		winner.c \
		bot.c \
		choose.c \
		even.c \
		find_line.c \
		parity.c \
		uneven.c \
		particular.c \
		impossible.c

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
