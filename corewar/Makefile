##
## Makefile for corewar in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/corewar-2017-baron_l
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Sun Mar 31 20:09:12 2013 louis-philippe baron
## Last update Sun Mar 31 20:16:13 2013 louis-philippe baron
##

## asm
SRC_A=		asm/main.c \
		asm/basics.c \
		asm/my_getnbr_base.c \
		asm/my_strcat.c \
		asm/match.c \
		asm/op.c \
		asm/my_put_error.c \
		asm/check_validity.c \
		asm/check_labels.c \
		asm/check_args.c \
		asm/check_types.c \
		asm/label_exist.c \
		asm/fill_oct_size.c \
		asm/get_next_line.c \
		asm/get_next_line_list.c \
		asm/get_file.c \
		asm/get_name_comment.c \
		asm/linked_list.c \
		asm/epur_file.c \
		asm/clean_file.c \
		asm/my_str_to_wordtab.c \
		asm/cut_args.c \
		asm/my_open.c \
		asm/my_create.c \
		asm/my_write.c \
		asm/free_file.c \
		asm/opcode.c \
		asm/code_octet.c \
		asm/define_prog_length.c \
		asm/get_label.c \
		asm/w_header.c \
		asm/w_args.c \
		asm/w_direct.c \
		asm/w_indirect.c \
		asm/w_register.c

OBJ_A=		$(SRC_A:.c=.o)

NAME_A=		asm/asm

## corewar
SRC_C=		corewar/main.c \
		corewar/list_siders.c \
		corewar/int_siders.c \
		corewar/char_siders.c \
		corewar/my_malloc.c \
		corewar/my_putnbr_base.c \
		corewar/init_arena.c \
		corewar/opt_errors.c \
		corewar/fight.c \
		corewar/l_inst.c \
		corewar/true_instructions.c \
		corewar/utils.c \
		corewar/operations.c

OBJ_C=		$(SRC_C:.c=.o)

NAME_C=		corewar/corewar

## rules
# CFLAGS=		-g -Wall -Wextra

all:		$(NAME_A) $(NAME_C)

$(NAME_A):	$(OBJ_A)
		cc -o $(NAME_A) $(OBJ_A)

$(NAME_C):	$(OBJ_C)
		cc -o $(NAME_C) $(OBJ_C)

clean:
		rm -f $(OBJ_A) $(OBJ_C)

fclean:		clean
		rm -f $(NAME_A) $(NAME_C)

re:		fclean all
