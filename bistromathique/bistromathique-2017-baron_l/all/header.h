/*
** header.h for bistromathique in /home/parejo_p/svn/bistromathique-2017-baron_l/all
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Sun Nov 11 19:14:23 2012 pelayo parejopagador
** Last update Sun Nov 11 20:23:40 2012 louis-philippe baron
*/

#ifndef	FUNCTIONS_H_
#define	FUNCTIONS_H_

void		my_putchar(char);
void		my_putstr(char *);
int		my_strlen(char *);
int		get_val(char *, char);
void		*my_malloc(int, char *);

int		who_is_longer(char *, char *);
void		fill_with_0(char *, char *, int);
void		epuur(char *, int, char *, char *);
char		*epur_str(char *, char *, char *);

int		are_the_nbrs_neg(char **, char **, char *);
void		put_neg_for_add(char *, int, int, char *);
void		put_neg_for_sub(char *, int, int, char *);

void		my_swap(char **, char **);
int		swap_same_size(char **, char **, char *);
int		swap_nbr(char **, char **, char *);

void		do_addition(char *, char *, char *, char *);
char		*addition(char *, char *, char *, char *);
void		do_subtraction(char *, char *, char *, char *);
char		*subtraction(char *, char *, char *, char *);
void		do_multi(char *, char *, char *, char *);
char		*multi(char *, char *, char *, char *);

#endif
