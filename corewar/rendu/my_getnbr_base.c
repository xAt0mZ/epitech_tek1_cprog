/*
** my_getnbr_base.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Mar 27 15:46:46 2013 louis-philippe baron
** Last update Sun Mar 31 19:45:00 2013 louis-philippe baron
*/

#include	"hcorewar.h"

static int	find_base(char c, char *base)
{
  int		i;

  i = 0;
  while (base[i])
    {
      if (base[i] == c)
	return (i);
      i++;
    }
  return (0);
}

char		my_getnbr_base(char *str, char *base)
{
  int		i;
  char		res;

  res = 0;
  i = 0;
  while (str[i])
    {
      res = res * my_strlen(base) + find_base(str[i], base);
      i++;
    }
  return (res);
}
