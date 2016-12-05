/*
** hcorewar.h for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Mar 22 15:58:50 2013 louis-philippe baron
** Last update Sat Mar 30 14:55:32 2013 louis-philippe baron
*/

#ifndef	COREWAR_H_
# define	COREWAR_H_

#include	<unistd.h>
#include	<stdlib.h>

/*
** includes for open(2)
*/
#include	<sys/types.h>
#include	<sys/stat.h>
#include	<fcntl.h>

#include	"op.h"
#include	"hget_next_line.h"

#define	INVALID		(-1)
#define	ERROR		(-2)

#define	SYNTAX_ERROR	("Syntax error line ")
#define	UNDEF_LABEL	("Label undefined line ")
#define	UNDEF_REG	("No such register line ")
#define	WARNING_DIR	("Warning Direct too big line ")
#define	WARNING_IND	("Warning Indirection to far line ")

typedef	struct	s_list
{
  char		*command;
  char		*args;
  int		pos;
  int		oct_size;
  int		label;
  int		op_tab_line;
  struct s_list	*next;
}		t_list;

typedef	struct	s_all
{
  int		fd;
  t_list	*list;
}		t_all;

#include	"hprototypes.h"

#endif	/* COREWAR_H_ */
