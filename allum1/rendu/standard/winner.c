/*
** winner.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Feb  7 15:38:53 2013 louis-philippe baron
** Last update Thu Feb  7 16:31:25 2013 louis-philippe baron
*/

#include	"hallum.h"

int		winner(int i)
{
  if (i == 0)
    my_putstr("You win !\n", 1);
  else
    my_putstr("You loose ... Try again !\n", 1);
  return (0);
}
