/*
** hprojet.h for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Feb  6 15:28:30 2013 louis-philippe baron
** Last update Tue Feb 12 10:55:44 2013 louis-philippe baron
*/

#ifndef	ALLUM_H_
#define	ALLUM_H_

#include	<unistd.h>
#include	<stdlib.h>

#include	"hget_next_line.h"

#define	ERROR	(-1)

typedef	struct	s_map
{
  char		**map;
  int		line;
  int		matches;
  char		config[4];
}		t_map;

#include	"hprototypes.h"

#endif
