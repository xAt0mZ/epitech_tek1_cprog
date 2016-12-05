/*
** get_label.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Mar 31 16:17:08 2013 louis-philippe baron
** Last update Sun Mar 31 19:30:10 2013 louis-philippe baron
*/

#include	"hcorewar.h"

static int	get_negativ_label(t_list *list, t_all *all, char *label)
{
  int		res;
  t_list	*tmp;

  res = 0;
  tmp = all->list->next->next;
  while (res == 0)
    {
      if (tmp->label == 1 && my_match(tmp->command, label) == 0)
	res = 1;
      tmp = tmp->next;
    }
  res = 0;
  while (tmp != list)
    {
      res += tmp->oct_size;
      tmp = tmp->next;
    }
  return (-res);
}

int		get_label(t_list *list, t_all *all, char *label)
{
  int		res;
  t_list	*tmp;

  res = 0;
  tmp = list;
  while (tmp)
    {
      if (tmp->label == 1 && my_match(tmp->command, label) == 0)
	return (res);
      if (tmp->label == 0)
	res += tmp->oct_size;
      tmp = tmp->next;
    }
  res = get_negativ_label(list, all, label);
  return (res);
}
