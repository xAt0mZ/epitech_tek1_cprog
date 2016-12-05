/*
** check_validity.c for bsq in /home/baron_l//local/rendu/piscine/projets/bsq/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Dec  4 13:27:44 2012 louis-philippe baron
** Last update Tue Dec  4 18:21:28 2012 louis-philippe baron
*/

#include	"hbsq.h"

int		check_size_lines(char **file)
{
  int		i;
  int		k;
  int		size;

  size = 0;
  while (file[0][size])
    size++;
  k = 1;
  while (file[k])
    {
      i = 0;
      while (file[k][i])
	i++;
      if (i != size)
	return (ERROR);
      k++;
    }
  return (0);
}

int		check_content(char **file)
{
  int		k;
  int		i;

  k = 0;
  while (file[k])
    {
      i = 0;
      while (file[k][i])
	{
	  if (file[k][i] != '.' && file[k][i] != 'o')
	    return (ERROR);
	  i++;
	}
      k++;
    }
  return (0);
}

int		check_possibilities(char **file)
{
  int		i;
  int		k;

  k = 0;
  while (file[k])
    {
      i = 0;
      while (file[k][i])
	{
	  if (file[k][i] == '.')
	    return (0);
	  i++;
	}
      k++;
    }
  return (ERROR);
}

int		check_validity(char **file)
{
  if (check_size_lines(file) == ERROR)
    {
      my_putstr("Lines don't have same size.\n");
      return (ERROR);
    }
  if (check_content(file) == ERROR)
    {
      my_putstr("File doesn't contain only \".\" and \"o\".\n");
      return (ERROR);
    }
  if (check_possibilities(file) == ERROR)
    {
      my_putstr("File doesn't contain \".\" : there is no solution.\n");
      return (ERROR);
    }
  return (0);
}
