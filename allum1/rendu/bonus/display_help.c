/*
** display_help.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Feb  5 19:06:51 2013 louis-philippe baron
** Last update Tue Feb  5 19:31:21 2013 louis-philippe baron
*/

#include	"hallum.h"

void		display_help()
{
  my_putstr("\nUsage : ./allum1 [-option ...]\n");
  my_putstr("Options are :\n");
  my_putstr("\t-difficulty\t[1 ~ 5]\n");
  my_putstr("\t-row\t\t[1 ~ 42]\n");
  my_putstr("\t-mode\t\t[1 ~ 2]\n\n");
}
