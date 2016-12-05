/*
** main.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Feb  6 15:27:45 2013 louis-philippe baron
** Last update Thu Feb  7 16:45:12 2013 louis-philippe baron
*/

#include	"hallum.h"

int		allum(t_map *map)
{
  int		i;

  if ((map->map = get_map()) == NULL)
    return (ERROR);
  fill_map(map->map);
  i = 0;
  while (is_the_end(map->map) == ERROR)
    {
      if (i == 0)
	{
	  play(map);
	  i = 1;
	}
      else
	{
	  bot(map);
	  i = 0;
	}
    }
  winner(i);
  free_map(map->map);
  free(map);
  return (0);
}

int		main(int ac, char **av)
{
  t_map		*map;

  (void)av;
  if (ac == 1)
    {
      if ((map = malloc(sizeof(t_map))) == NULL)
	{
	  my_putstr("Malloc failed.\n", 2);
	  return (ERROR);
	}
      if (allum(map) == ERROR)
	return (ERROR);
    }
  else
    my_putstr("Usage : ./allum1\n", 1);
  return (0);
}
