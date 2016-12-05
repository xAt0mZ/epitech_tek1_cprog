/*
** play.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Feb  6 20:32:20 2013 louis-philippe baron
** Last update Tue Feb 12 14:25:49 2013 louis-philippe baron
*/

#include	"hallum.h"

static int	line(t_map *map)
{
  char		*cmd;

  my_putstr("It's your turn\n", 1);
  my_putstr("Enter line you want to choose : ", 1);
  if ((cmd = get_next_line(0)) == NULL)
    {
      my_putstr("Get_next_line failed.\n", 2);
      return (ERROR);
    }
  while (line_selection(cmd, map) == ERROR)
    {
      free(cmd);
      if ((cmd = get_next_line(0)) == NULL)
	{
	  my_putstr("Get_next_line failed.\n", 2);
	  return (ERROR);
	}
    }
  if (cmd)
    free(cmd);
  return (0);
}

static int	match(t_map *map)
{
  char		*cmd;

  my_putstr("Enter number of matches you want to take : ", 1);
  if ((cmd = get_next_line(0)) == NULL)
    {
      my_putstr("Get_next_line failed.\n", 2);
      return (ERROR);
    }
  while (match_selection(cmd, map) == ERROR)
    {
      free(cmd);
      if ((cmd = get_next_line(0)) == NULL)
	{
	  my_putstr("Get_next_line failed.\n", 2);
	  return (ERROR);
	}
    }
  if (cmd)
    free(cmd);
  return (0);
}

int		play(t_map *map)
{
  show_map(map->map);
  if (line(map) == ERROR)
    return (ERROR);
  if (match(map) == ERROR)
    return (ERROR);
  delete_matches(map->map, map->line, map->matches);
  return (0);
}
