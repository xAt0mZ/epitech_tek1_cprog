/*
** find_square.c for bsq in /home/baron_l//local/rendu/piscine/projets/bsq/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Dec  4 11:36:47 2012 louis-philippe baron
** Last update Tue Dec  4 18:13:26 2012 louis-philippe baron
*/

#include	"hbsq.h"

int		save_start(t_square *start, int i, int j, int max)
{
  start->x = i;
  start->y = j;
  start->size = max;
  return (0);
}

int		is_this_the_one(char **file, int i, int j, int max)
{
  int		size;
  int		h;

  h = j + max;
  size = i + max;
  while (j < h)
    {
      i = size - max;
      while (i < size)
	{
	  if (file[j][i] != '.')
	    return (ERROR);
	  i++;
	}
      j++;
    }
  return (0);
}

int		find_it(char **file, int max, t_square *start)
{
  int		j;
  int		i;

  j = 0;
  while (file[j + max - 1])
    {
      i = 0;
      while (i + max <= my_strlen(file[0]))
	{
	  if ((is_this_the_one(file, i, j, max)) != ERROR)
	    {
	      save_start(start, i, j, max);
	      return (0);
	    }
	  i++;
	}
      j++;
    }
  return (ERROR);
}

int		replace_it(char **file, t_square *start)
{
  int		i;
  int		j;
  int		line;
  int		size;

  line = start->x + start->size;
  size = start->y + start->size;
  j = start->y;
  while (j < size)
    {
      i = start->x;
      while (i < line)
	{
	  file[j][i] = 'x';
	  i++;
	}
      j++;
    }
  return (0);
}

int		find_square(char **file, int linenbr)
{
  int		sizeline;
  int		max;
  t_square	*start;

  if ((start = malloc(sizeof(*start))) == NULL)
    return (ERROR);
  if (check_validity(file) == ERROR)
    return (ERROR);
  sizeline = my_strlen(file[0]);
  if (sizeline < linenbr)
    max = sizeline;
  else
    max = linenbr;
  while ((find_it(file, max, start)) && max)
    max--;
  replace_it(file, start);
  free(start);
  return (0);
}
