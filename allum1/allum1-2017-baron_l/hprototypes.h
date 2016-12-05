/*
** hprototypes.h for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Feb  7 15:17:03 2013 louis-philippe baron
** Last update Tue Feb 12 14:19:21 2013 louis-philippe baron
*/

#ifndef	PROTOTYPES_H_
#define	PROTOTYPES_H_

/*
** File: bot.c
*/
int		bot(t_map *);

/*
** File: basics.c
*/
void		my_putchar(char, int);
void		my_putstr(char *, int);
void		my_putnbr(int);
int		my_getnbr(char *);

/*
** File: check_content.c
*/
int		bot(t_map *);

/*
** File: check_content.c
*/
int		check_content(char *);

/*
** File: check_line.c
*/
int		check_line_exist(int, char **);

/*
** File: check_match.c
*/
int		check_match_nb(int, t_map *);

/*
** File: choose.c
*/
int		choose(int, t_map *);

/*
** File: delete_matches.c
*/
int		delete_matches(char **, int, int);

/*
** File: even.c
*/
int		situ_0(t_map *);
int		situ_2(t_map *);
int		situ_4(t_map *);
int		situ_6(t_map *);

/*
** File: fill_map.c
*/
int		fill_map(char **);

/*
** File: find_line.c
*/
int		convert_line(char **, int);
int		find_line(char **, int);

/*
** File: free_map.c
*/
int		free_map(char **);

/*
** File: get_map.c
*/
char		**get_map();

/*
** File: impossible.c
*/
int		impossible(t_map *, int);

/*
** File: is_the_end.c
*/
int		is_the_end(char **);

/*
** File: line_selection.c
*/
int		line_selection(char *, t_map *);

/*
** File: main.c
*/
int		allum();
int		main(int, char **);

/*
** File: match_selection.c
*/
int		match_selection(char *, t_map *);

/*
** File: parity.c
*/
int		even(int, t_map *);
int		uneven(int, t_map *);

/*
** File: particular.c
*/
int		particular(t_map *);

/*
** File: play.c
*/
int		play(t_map *);

/*
** File: show_map.c
*/
int		show_map(char **);

/*
** File: uneven.c
*/
int		situ_1(t_map *);
int		situ_3(t_map *);
int		situ_5(t_map *);
int		situ_7(t_map *);

/*
** File: winner.c
*/
int		winner(int);

#endif
