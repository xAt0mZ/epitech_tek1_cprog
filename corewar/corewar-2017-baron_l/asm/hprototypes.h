/*
** hprototypes.h for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Mar 22 16:05:30 2013 louis-philippe baron
** Last update Sun Mar 31 19:53:52 2013 louis-philippe baron
*/

#ifndef	PROTOTYPES_H_
# define	PROTOTYPES_H_

/*
** basics
*/
void		my_putchar(char);
int		my_putstr(char *);
int		my_getnbr(char *);
int		my_strlen(char *);
int		my_putnbr(int);
char		my_getnbr_base(char *, char *);
int		my_strcmp(char *, char *);
int		my_match(char *, char *);

/*
** free
*/
int		free_tab(char **);
int		free_list(t_list *);

/*
** my_*
*/
int		my_open(char *);
int		my_write(int, unsigned char *, int);
int		my_create(char *);
int		my_put_error(char *, int);

/*
** parsing
*/
char		**get_name_comment(char *);
char		**get_file(int);
char		**epur_file(char **);
t_list		*list_file(char **);
int		clean_file(t_list *);
char		*my_strcat(char *, char *);
char		**my_str_to_wordtab(char *, char *);
char		**cut_args(char *);

/*
** checks
*/
int		check_validity(t_list *);
int		check_labels(t_list *);
int		label_exist(char *, t_list *, t_list *);
int		check_args(t_list *);
int		check_type(char *, t_list *, t_list *);

/*
** encoding
*/
int		w_header(t_all *);
int		put_opcode(t_list *, t_all *);
int		code_octet(int, char **);
int		w_args(t_list *, t_all *);
int		w_register(int, char *);
int		w_direct(t_all *, char *, t_list *);
int		w_indirect(t_all *, char *, t_list *);

/*
** others
*/
int		define_prog_length(t_all *);
int		get_label(t_list *, t_all *, char *);
int		fill_oct_size(t_list *, int);

#endif	/* PROTOTYPES_H_ */
