/*
** bistromathique.h for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct 31 11:34:55 2012 louis-philippe baron
** Last update Wed Nov  7 13:59:37 2012 louis-philippe baron
*/

#ifndef BISTROMATHIQUE_H_
#define BISTROMATHIQUE_H_

void		my_putchar(char);
void		my_putstr(char *);
int		my_strlen(char *);
int		my_getnbr(char *);
void		*my_malloc(int);

char		*calc_addition(char *, char *, char *, char *);
char		*calc_subtraction(char *, char *, char *, char *);
char		*calc_multiplication(char *, char *);
char		*calc_division(char *, char *);
char		*calc_modulo(char *, char *);

int		eval_expr(char *, char *, char *, int);
int		check_doubles(char *, char*);
int		check_doubles_2(char *);
int		check_match(char, char *, int);
int		check_expr_base_ops(char *, char *, char *, int);
int		check_parenthesis(char *, char *, int);
int		check_ops_bef_par(char *, char *, char *, int);
int		check_first_and_last(char *, char *, int);
int		check_f_l_is_par(char *, char *, int);
int		check_bef_af_ops(char *, char *, char *);
int		negativ_nbrs(char **, char **, char *);

typedef struct s_list t_list;

struct s_list
{
  void		*data;
  t_list	*next;
  t_list	*prev;
};


#endif
