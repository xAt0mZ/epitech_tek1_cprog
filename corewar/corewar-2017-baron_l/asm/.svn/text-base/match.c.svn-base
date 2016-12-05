/*
** match.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Mar 26 13:45:38 2013 louis-philippe baron
** Last update Tue Mar 26 18:28:20 2013 louis-philippe baron
*/

#include	"hcorewar.h"

int		my_match(char *str, char *to_find)
{
  int		i;

  i = 0;
  while (str[i] && to_find[i])
    {
      if (str[i] != to_find[i])
	return (ERROR);
      i++;
    }
  if (str[i] || to_find[i])
    return (ERROR);
  return (0);
}

int		my_strcmp(char *str, char *to_find)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (str[i])
    {
      if (str[i] == to_find[j])
	j++;
      else if (to_find[j])
	j = 0;
      i++;
    }
  if (to_find[j])
    return (ERROR);
  return (0);
}
