/*
** clean_res.c for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique/baron_l/ops/try_2
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Nov  9 23:22:55 2012 louis-philippe baron
** Last update Fri Nov  9 23:25:45 2012 louis-philippe baron
*/

#include	"header.h"

void		fill_with_0(char *res, char *base, int s_m)
{
  int		i;

  i = 0;
  res[s_m] = '\0';
  while (i != s_m)
    {
      res[i] = base[0];
      i++;
    }
}
