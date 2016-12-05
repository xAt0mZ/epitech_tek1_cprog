/*
** free_tab.c for lem_in in /home/baron_l//local/rendu/projets/c_prog_elem/lem_in/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Apr 10 11:11:35 2013 louis-philippe baron
** Last update Wed Apr 10 11:12:29 2013 louis-philippe baron
*/

#include	"hlemin.h"

int		free_tab(char **tab)
{
  int		k;

  k = 0;
  while (tab[k])
    {
      free(tab[k]);
      k++;
    }
  free(tab);
  return (0);
}
