/*
** freeall.c for bsq in /home/baron_l//local/rendu/piscine/projets/bsq/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Dec  4 10:31:41 2012 louis-philippe baron
** Last update Wed Dec  5 13:04:27 2012 louis-philippe baron
*/

#include	"hbsq.h"

int		free_file(char **file)
{
  int		k;

  k = 0;
  while (file[k])
    {
      free(file[k]);
      k++;
    }
  free(file);
  return (0);
}
