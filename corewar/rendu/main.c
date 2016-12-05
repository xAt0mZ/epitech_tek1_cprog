/*
** main.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Mar 22 15:56:32 2013 louis-philippe baron
** Last update Sun Mar 31 19:29:18 2013 louis-philippe baron
*/

#include	"hcorewar.h"

static int	corewar3(t_all *all)
{
  t_list	*list;

  list = all->list->next->next;
  while (list)
    {
      if (list->label == 0)
	{
	  if (put_opcode(list, all) == ERROR
	      || w_args(list, all) == ERROR)
	    return (ERROR);
	}
      list = list->next;
    }
  return (0);
}

static int	corewar2(t_all *all, char *str)
{
  if ((all->fd = my_create(str)) == ERROR)
    return (ERROR);
  clean_file(all->list);
  if (w_header(all) == ERROR)
    return (ERROR);
  if (corewar3(all) == ERROR)
    return (ERROR);
  close(all->fd);
  return (0);
}

static int	corewar(char *str, t_all *all)
{
  char		**file;
  int		ret;

  if ((all->fd = my_open(str)) == ERROR)
    return (INVALID);
  if ((file = get_file(all->fd)) == NULL || (file = epur_file(file)) == NULL
      || (all->list = list_file(file)) == NULL)
    {
      my_putstr("Problem in memory allocation during file parsing\n");
      return (ERROR);
    }
  ret = check_validity(all->list);
  if (ret == ERROR || ret == INVALID)
    {
      free_list(all->list);
      return (ret);
    }
  if (corewar2(all, str) == ERROR)
    return (ERROR);
  free_list(all->list);
  return (0);
}

int		main(int ac, char **av)
{
  int		i;
  t_all		all;

  if (ac > 1)
    {
      i = 1;
      while (i < ac)
	{
	  if (corewar(av[i], &all) == ERROR)
	    return (ERROR);
	  i++;
	}
    }
  else
    my_putstr("Usage : ./asm file1{.s} file2{.s} ...\n");
  return (0);
}
