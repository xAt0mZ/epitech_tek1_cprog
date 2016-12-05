/*
** bot.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Feb  7 16:45:26 2013 louis-philippe baron
** Last update Tue Feb 12 14:10:12 2013 louis-philippe baron
*/

#include	"hallum.h"

static int	get_situ(char **map)
{
  int		i;
  int		j;
  int		nb;
  int		situ;

  j = 0;
  situ = 0;
  while (map[j])
    {
      i = 0;
      nb = 0;
      while (map[j][i])
	{
	  if (map[j][i] == '|')
	    nb++;
	  i++;
	}
      situ ^= nb;
      j++;
    }
  return (situ);
}

int		bot(t_map *map)
{
  int		situ;

  show_map(map->map);
  situ = get_situ(map->map);
  my_putstr("Bot turn.\n", 1);
  choose(situ, map);
  return (0);
}
