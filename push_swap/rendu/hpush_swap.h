/*
** hpush_swap.h for push_swap in /home/baron_l//local/rendu/projets/c_prog_elem/push_swap/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Dec 19 10:30:40 2012 louis-philippe baron
** Last update Sun Jan  6 23:24:56 2013 louis-philippe baron
*/

#ifndef	PUSHSWAP_H_
#define	PUSHSWAP_H_

#include	"unistd.h"
#include	<stdlib.h>

#define	ERROR		(1)

typedef	struct	s_list
{
  int		nb;
  int		weight;
  struct s_list	*next;
}		t_list;

/*
** File: basics.c
*/

void		my_putchar(char);
void		my_putstr(char *);
int		my_putnbr(int);
int		my_getnbr(char *);

/*
** File: check_validity.c
*/

int		check_validity(int, char **);

/*
** File: check_max.c
*/

int		check_max(char *);

/*
** File: push_swap.c
*/

int		push_swap(int, char **);

/*
** File: linked_list.c
*/

t_list		*do_list_a(int, char **);

/*
** File: free_list.c
*/

int		free_list(t_list *);

/*
** File: show_list.c
*/

int		show_list(t_list *, t_list *);

/*
** File: rev_list.c
*/

int		rev_list(t_list **);

/*
** File: give_weight.c
*/

int		give_weight(t_list *);

/*
** File: push_list.c
*/

t_list		*push_to_sec_arg(t_list *, t_list **, int);

/*
** File: rotate_list.c
*/

t_list		*rotate(t_list *);

/*
** File: sort_list.c
*/

t_list		*sort_list(t_list *, t_list *, int);

#endif
