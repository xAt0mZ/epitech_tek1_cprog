/*
** hbsq.h for bsq in /home/baron_l//local/rendu/piscine/projets/bsq/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Dec  4 09:24:58 2012 louis-philippe baron
** Last update Tue Dec  4 15:13:18 2012 louis-philippe baron
*/

#ifndef	HBSQ_H_
#define	HBSQ_H_

#include	<stdlib.h>
#include	<unistd.h>
#include	<sys/types.h>
#include	<sys/stat.h>
#include	<fcntl.h>
#include	"hget_next_line.h"

#define	ERROR	(1)

typedef	struct	s_square
{
  int	x;
  int	y;
  int	size;
} t_square;

void		my_putchar(char);
void		my_putstr(char *);
int		my_getnbr(char *);
void		my_putnbr(int);
int		my_strlen(char *);

int		bsq(char *);
char		**get_file(int, int);
int		get_entire_line(char **, int, int);
int		free_file(char **);
int		find_square(char **, int);
int		sort_wdtb(char **);
int		check_validity(char **);

#endif
