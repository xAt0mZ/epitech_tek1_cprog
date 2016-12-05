/*
** h_list.h for bistromathique in /home/parejo_p//bistromatique/my_list_to_tab
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Wed Oct 31 17:42:34 2012 pelayo parejopagador
** Last update Sun Nov 11 19:02:40 2012 pelayo parejopagador
*/

#ifndef _H_LIST_H_
 #define _H_LIST_H_

typedef struct s_list
{
  char		*data;
  struct s_list	*next;
  struct s_list *before;
} t_list;

int		wordlenght(char *, int, char *);
int		my_strword(char *);
void		my_show_list(t_list *);
void		my_show_before(t_list *);
int		my_list_size(t_list *);
unsigned int	my_copy_ops(char *, t_list *, unsigned int, char *);
unsigned int	my_copy_base(char *, t_list *, unsigned int, char *);
t_list		*my_params_in_list(char *, char *);
void		my_double_link_list(t_list **);
void		my_show_tab(char **);
int		is_ops(char *, int, char *);
void		my_putchar(char);
int		my_strlen(char *);
void		my_putstr(char *);
unsigned int	multi_ops(char *, t_list *, unsigned int, char *);
unsigned int	copy_one_ops(char *, t_list *, unsigned int);
int		minus_substitute(t_list *, char *, unsigned int, char *);
int		partial_ops(char *, int, char *);
void		*xmalloc(unsigned int);
int		is_starting(char *, int, char *);
int		arithmetics(t_list **, int, char *, char *);
char		*priority_manager(t_list **, char *, char *, int);
int		add_minus(t_list *, char *, char *);
int		mul_div_mod(t_list *, char *, char *);
void		save_and_replace(t_list *, char *);
char		*my_strdup(char *, char *);
int		datalenght(char *, char *);
int		launch_list(char *, char *, char *, unsigned int);

#endif /* _H_LIST_H_ */
