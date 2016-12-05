/*
** core.h for corewar in /home/garner_p/Workplace/C_Prog_Elem/corewar-2017-baron_l/vm
**
** Made by Garnero Philip
** Login   <garner_p@epitech.net>
**
** Started on  Wed Mar 20 18:26:09 2013 Garnero Philip
** Last update Sat Mar 30 15:59:18 2013 Garnero Philip
*/

#include	"op.h"

#ifndef	_CORE_H_
# define _CORE_H_

#define MAX(a, b)	(((a) > (b)) ? (a) : (b))
#define MIN(a, b)	(((a) <= (b)) ? (a) : (b))
#define AM		tmp->cur->gen_mem
#define PC		tmp->cur->pc
#define UC		(unsigned char)

typedef	struct	s_b_champ
{
  int	n;
  int	a;
  char	*path;
}		t_b_champ;

typedef struct	s_command
{
  int		cycles_to_dump;
  t_b_champ	beg[4];
  int		total;
}		t_command;

typedef struct	s_proc
{
  unsigned char	*gen_mem;
  unsigned char	*reg;
  char		*name;
  int		pc;
  int		wait;
  int		carry;
  int		id_proc;
  int		id;
  int		nbr_live;
}		t_proc;

typedef struct	s_list
{
  t_proc	*cur;
  struct s_list	*next;
}		t_list;

typedef struct	s_champ
{
  int		id;
  int		pos;
  t_header	info;
  unsigned char	*data;
}		t_champ;

/*
** main.c
*/

unsigned char	*my_strdup(unsigned char *dup, int size);
int		invert_int(int b);
void		mem_dump(unsigned char *arena);
unsigned char	*set_champs(unsigned char *arena, t_command *res, t_champ *all, t_list **begin);
int		main(int argc, char **argv);

/*
** char_siders.c
*/

void		my_putchar(char c);
void		my_putstr(char *str);
void		my_putstr2(char *str);
int		my_strlen(char *str);
unsigned char   *my_strcpy(unsigned char *dest, unsigned char *src);

/*
** init_arena.c
*/

int	who_th(t_command *cur);
void	check_id(t_command *cur);
void	init_command(t_command *cur);
int	set_dist(t_command *cur, t_champ *all);
int	load_champs(t_champ *all, t_command *cur);

/*
** int_siders.c
*/

void	my_gettnbr(char *str, int *ptresult);
int	my_getnbr(char *str);
void    my_putt_nbr(int n);
void    my_put_nbr(int nb);

/*
** list_siders.c
*/

int	free_loop(t_list *first);
int	my_put_in_list(t_list **list, t_proc *cur);
void	my_swap_link(t_list *tmp);
void	sort(t_list *first);
int	delete_mail(t_list **envi, t_list *tmp);

/*
** my_malloc.c
*/

void		cleaner(unsigned char *str, int max);
void		my_free(void *ptr);
void		*my_malloc(int size);
unsigned char   *my_strcncpy(int pos, int lim, unsigned char *dest, unsigned char *src);
int		my_strcmp(char *s1, char *s2);

/*
** my_putnbr_base.c
*/

void	puttnbrbase(int result, int lenghtmax, int nbr, char *base);
int	my_putnbr_base(unsigned char nbr, char *base);

/*
** opt_errors.c
*/

void	str_error(char c, int i, char *str);
void	double_id(t_command *cur);
void	take_champs(int argc, char **argv, int i, t_command *cur);
void	check_command(int argc, char **argv, t_command *cur);

/*
** fight.c
*/

int	manage_cur_cycle(int ctd, int *cycles_to_dump, t_list **begin);
int	begin_games(t_list *begin, int cycles_to_dump);

/*
** l_inst.c
*/

int	l_live(t_list **begin, t_list *tmp);
int	l_ld(t_list **begin, t_list *tmp);
int	l_st(t_list **begin, t_list *tmp);
int	l_add(t_list **begin, t_list *tmp);
int	l_sub(t_list **begin, t_list *tmp);
int	l_and(t_list **begin, t_list *tmp);
int	l_or(t_list **begin, t_list *tmp);
int	l_xor(t_list **begin, t_list *tmp);
int	l_zjmp(t_list **begin, t_list *tmp);
int	l_ldi(t_list **begin, t_list *tmp);
int	l_sti(t_list **begin, t_list *tmp);
int	l_fork(t_list **begin, t_list *tmp);
int	l_lld(t_list **begin, t_list *tmp);
int	l_lldi(t_list **begin, t_list *tmp);
int	l_lfork(t_list **begin, t_list *tmp);
int	l_aff(t_list **begin, t_list *tmp);

/*
** true_instructions.c
*/

int	t_live(t_list **begin, int i);
int	t_ld(t_list *tmp, unsigned char *load, int where);
int	t_st(t_list *tmp, unsigned char *load, int where);
int	t_sti(t_list *tmp, long long i, int where, unsigned char *load);

/*
** utils.c
*/

unsigned char	*return_reg(t_list *tmp, int nbr);
unsigned char	*return_dir(t_list *tmp, int place);
long long	put_char_into_long(unsigned char *str, int size);
long long	return_ind_place(t_list *tmp, int place, int mod);
unsigned char	*return_ind(t_list *tmp, int place, int mod, int size);

#endif	/* !_CORE_H_ */
