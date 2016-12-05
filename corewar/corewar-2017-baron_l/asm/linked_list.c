/*
** get_file.c for rtv1 in /home/baron_l//local/rendu/projets/igraph/rtv1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Mar  5 14:28:07 2013 louis-philippe baron
** Last update Sat Mar 30 23:49:25 2013 louis-philippe baron
*/

#include	"hcorewar.h"

static int	my_list_size(t_list *list)
{
  t_list	*tmp;
  int		i;

  tmp = list;
  i = 0;
  while (tmp)
    {
      i++;
      tmp = tmp->next;
    }
  return (i);
}

static int	rev_list(t_list **begin)
{
  t_list	*tmp;
  t_list	*current;
  t_list	*link;
  int		size;
  int		i;

  i = 1;
  size = my_list_size(*begin);
  tmp = *begin;
  while (i <= size)
    {
      link = tmp->next;
      if (i == 1)
	tmp->next = NULL;
      else
	tmp->next = current;
      current = tmp;
      if (i == size)
	*begin = current;
      tmp = link;
      i++;
    }
  return (0);
}

static char	**add_elem(t_list **list, char *str, int k)
{
  t_list	*elem;
  char		**tmp;

  if ((elem = malloc(sizeof(*elem))) == NULL)
    return (NULL);
  if ((k <= 1 && (tmp = get_name_comment(str)) == NULL)
      || (k > 1 && (tmp = my_str_to_wordtab(str, " ")) == NULL))
    return (NULL);
  elem->command = tmp[0];
  elem->args = tmp[1];
  elem->pos = k + 1;
  elem->label = 0;
  elem->op_tab_line = 0;
  elem->oct_size = 1;
  elem->next = *list;
  *list = elem;
  return (tmp);
}


t_list		*list_file(char **file)
{
  t_list	*list;
  char		**tmp;
  int		k;
  int		i;

  k = 0;
  list = NULL;
  while (file[k])
    {
      if ((tmp = add_elem(&list, file[k], k)) == NULL)
	return (NULL);
      i = 1;
      if (tmp[i])
	while (tmp[++i])
	  free(tmp[i]);
      free(tmp);
      k++;
    }
  free_tab(file);
  rev_list(&list);
  return (list);
}
