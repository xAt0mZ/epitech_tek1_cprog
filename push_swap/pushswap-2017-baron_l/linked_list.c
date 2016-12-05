/*
** chained_list.c for push_swap in /home/baron_l//local/rendu/projets/c_prog_elem/push_swap/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Jan  4 18:59:30 2013 louis-philippe baron
** Last update Sun Jan  6 23:14:39 2013 louis-philippe baron
*/

#include	"hpush_swap.h"

static int	add_elem(t_list **list, char *str_nb)
{
  t_list	*elem;

  if ((elem = malloc(sizeof(*elem))) == NULL)
    return (ERROR);
  elem->nb = my_getnbr(str_nb);
  elem->weight = 0;
  elem->next = *list;
  *list = elem;
  return (0);
}

t_list		*do_list_a(int ac, char **av)
{
  int		i;
  t_list	*list;

  if (av[1][0] == '-' &&  av[1][1] == 'v' && av[1][2] == '\0')
    i = 2;
  else
    i = 1;
  list = NULL;
  while (i < ac)
    {
      if (add_elem(&list, av[i]) == ERROR)
	return (NULL);
      i++;
    }
  return (list);
}
