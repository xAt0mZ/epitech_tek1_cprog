/*
** get_next_line.h for get_next_line in /home/baron_l//local/rendu/piscine/projets/get_next_line/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Nov 15 14:02:48 2012 louis-philippe baron
** Last update Thu Nov 22 12:48:43 2012 louis-philippe baron
*/

#ifndef	GET_NEXT_LINE_H_
#define	GET_NEXT_LINE_H_

#define	READSIZE 20

#include	<stdlib.h>

char		*get_next_line(const int);
int		my_strlen_to_n(char *);
int		check_n(char *, char);
char		*my_realloc(char *, int, char *);
char		*cpy_buf_to_res(char *, char *, char *, int);

#endif
