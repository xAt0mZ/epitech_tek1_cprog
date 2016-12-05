/*
** newop.h for corewar in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Mar 21 15:20:30 2013 louis-philippe baron
** Last update Tue Mar 26 14:19:22 2013 louis-philippe baron
*/

#ifndef	OP_H_
# define	OP_H_

/*
** informations for VM and champions instructions lines
*/
#define	MEM_SIZE		(6 * 1024)
#define	IDX_MOD			(512)
#define	MAX_ARGS_NUMBER		(4)


#define	COMMENT_CHAR		'#'
#define	LABEL_CHAR		':'
#define	DIRECT_CHAR		'%'
#define	SEPARATOR_CHAR		','

#define	LABEL_CHARS		"abcdefghijklmnopqrstuvwxyz_0123456789"

#define	NAME_CMD_STRING		".name"
#define	COMMENT_CMD_STRING	".comment"


/*
** regs
*/
#define	REG_NUMBER		(16)


/*
** types
*/
typedef char	t_args_type;

#define	T_REG			(1)
#define	T_DIR			(2)
#define	T_IND			(4)
#define	T_LAB			(8)

typedef struct	s_op
{
  char		*mnemonique;
  char		nbr_args;
  t_args_type	type[MAX_ARGS_NUMBER];
  char		code;
  int		nbr_cycles;
  char		*comment;
}		t_op;


/*
** size (en octets)
*/
#define	IND_SIZE		(2)
#define	REG_SIZE		(4)
#define	DIR_SIZE		REG_SIZE


/*
** op_tab
*/
extern	t_op	op_tab[];


/*
** header
*/
#define	PROG_NAME_LENGTH	(128)
#define	COMMENT_LENGTH		(2048)

#define	COREWAR_EXEC_MAGIC	(0xEA83F3)

typedef struct	s_header
{
  int		magic;
  char		prog_name[PROG_NAME_LENGTH + 1];
  int		prog_size;
  char		comment[COMMENT_LENGTH + 1];
}		t_header;


/*
** live
*/
#define	CYCLE_TO_DIE		(1536)
#define	CYCLE_DELTA		(5)
#define	NBR_LIVE		(40)


#endif	/* OP_H_ */
