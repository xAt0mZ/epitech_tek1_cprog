/*
** bistromathique.h for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct 31 11:34:55 2012 louis-philippe baron
** Last update Sun Nov 11 20:20:28 2012 louis-philippe baron
*/

#ifndef BISTROMATHIQUE_H_
#define BISTROMATHIQUE_H_

void		my_putchar(char);
void		my_putstr(char *);
int		my_strlen(char *);
int		my_getnbr(char *);

int		eval_expr(char *, char *, char *, unsigned int);
int		check_doubles(char *, char*);
int		check_doubles_2(char *);
int		check_match(char, char *, int);
int		check_expr_base_ops(char *, char *, char *, long);
int		check_parenthesis(char *, char *, long);
int		check_ops_bef_par(char *, char *, char *, long);
int		check_first_and_last(char *, char *, long);
int		check_f_l_is_par(char *, char *, int);
int		check_bef_af_ops(char *, char *, char *);
void		check_div_mod(char *, char *, long);

#endif
