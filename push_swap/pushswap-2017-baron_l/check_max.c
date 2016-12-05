/*
** check_max.c for push_swap in /home/baron_l//local/rendu/projets/c_prog_elem/push_swap/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Jan  4 11:47:40 2013 louis-philippe baron
** Last update Fri Jan  4 17:16:18 2013 louis-philippe baron
*/

#include	"hpush_swap.h"

static void	my_strcpy(char *res, char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      res[i] = str[i];
      i++;
    }
  res[i] = '\0';
}

static int	compare(char *str, char *max)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  if (str[0] == '-')
    i++;
  while (str[i] && max[j])
    {
      if (str[i] > max[j])
	return (ERROR);
      i++;
      j++;
    }
  return (0);
}

int		check_max(char *str)
{
  char		neg[11];
  char		pos[11];
  int		retval;

  my_strcpy(neg, "2147483648");
  my_strcpy(pos, "2147483647");
  if (str[0] == '-')
    retval = compare(str, neg);
  else
    retval = compare(str, pos);
  return (retval);
}

