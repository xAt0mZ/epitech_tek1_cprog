##
## Makefile for Makefile in /home/garner_p/Save/lib
## 
## Made by Garnero Philip
## Login   <garner_p@epitech.net>
## 
## Started on  Mon Nov 26 12:26:36 2012 Garnero Philip
## Last update Sat Mar 30 23:09:43 2013 Garnero Philip
##

CC =	gcc

RM =	rm -f

FLAGS =	-g -Wextra -Wall

SRCS =	main.c\
	list_siders.c\
	int_siders.c\
	char_siders.c\
	my_malloc.c\
	my_putnbr_base.c\
	init_arena.c\
	opt_errors.c\
	fight.c\
	l_inst.c\
	true_instructions.c\
	utils.c\
	operations.c

NAME =	corewar

OBJS =	$(SRCS:.c=.o)

LIBS =	

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -o $(NAME) $(LIBS)

error:
		$(CC) $(FLAGS) $(SRCS) -o $(NAME) $(LIBS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re