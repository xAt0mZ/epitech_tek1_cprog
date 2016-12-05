/*
** clean_numbers.c for infin_add in /exam//rendu/ex_4
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Nov  8 09:51:20 2012 louis-philippe baron
** Last update Thu Nov  8 17:31:01 2012 louis-philippe baron
*/

#include	"infinadd.h"

void		fill_with_0(char *str, int size)
{
  int		i;

  i = 0;
  while (i < size)
    {
      str[i] = '0';
      i++;
    }
  str[size] = '\0';
}

int		get_val(char *base, char nb)
{
  int		i;

  i = 0;
  while (base[i] != nb)
    i++;
  return (i);
}
