/*
** get_next_line.h for get_next_line in /home/baron_l//local/rendu/piscine/projets/get_next_line/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Nov 15 14:02:48 2012 louis-philippe baron
** Last update Wed Nov 21 17:55:09 2012 louis-philippe baron
*/

#ifndef	GET_NEXT_LINE_H_
#define	GET_NEXT_LINE_H_

#define	READSIZE 20

#include	<stdlib.h>

typedef struct s_list
{
  char		*data;
  t_list	*next;
} t_list;

char		*get_next_line(const int);

#endif
