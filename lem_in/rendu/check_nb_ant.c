/*
** check_nb_ant.c for lem_in in /home/baron_l//local/rendu/projets/c_prog_elem/lem_in/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Apr 10 14:25:42 2013 louis-philippe baron
** Last update Wed Apr 10 14:32:29 2013 louis-philippe baron
*/

#include	"hlemin.h"

int		check_nb_ant(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (!(str[i] >= '0' && str[i] <= '9'))
	{
	  my_putstr("Invalid ant number line 1\n");
	  return (ERROR);
	}
      i++;
    }
  return (0);
}
