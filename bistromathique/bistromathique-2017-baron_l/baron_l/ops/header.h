/*
** functions.h for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique/baron_l/ops/try_2
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Nov  9 19:38:57 2012 louis-philippe baron
** Last update Sun Nov 11 18:39:42 2012 louis-philippe baron
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
int		division(char *, char *, char *, char *);
int		modulo(char *, char *, char *, char *);

#endif
