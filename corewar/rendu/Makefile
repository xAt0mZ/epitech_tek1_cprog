##
## Makefile for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Fri Mar 22 16:03:25 2013 louis-philippe baron
## Last update Sun Mar 31 19:56:41 2013 louis-philippe baron
##

SRC=		main.c \
		basics.c \
		my_getnbr_base.c \
		my_strcat.c \
		match.c \
		op.c \
		my_put_error.c \
		check_validity.c \
		check_labels.c \
		check_args.c \
		check_types.c \
		label_exist.c \
		fill_oct_size.c \
		get_next_line.c \
		get_next_line_list.c \
		get_file.c \
		get_name_comment.c \
		linked_list.c \
		epur_file.c \
		clean_file.c \
		my_str_to_wordtab.c \
		cut_args.c \
		my_open.c \
		my_create.c \
		my_write.c \
		free_file.c \
		opcode.c \
		code_octet.c \
		define_prog_length.c \
		get_label.c \
		w_header.c \
		w_args.c \
		w_direct.c \
		w_indirect.c \
		w_register.c

OBJ=		$(SRC:.c=.o)

CFLAGS=		-g -Wall -Wextra -ansi -pedantic

NAME=		asm

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
