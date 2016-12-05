/*
** check_validity.c for lem_in in /home/baron_l//local/rendu/projets/c_prog_elem/lem_in/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Apr 10 12:13:02 2013 louis-philippe baron
** Last update Wed Apr 10 14:33:49 2013 louis-philippe baron
*/

#include	"hlemin.h"

int		check_validity(char **file)
{
  int		k;

  k = 0;
  while (file[k])
    {
      if (k == 0 && check_nb_ant(file[k]) == ERROR)
	return (ERROR);

      k++;
    }
  return (0);
}
