/*
** check_types.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Mar 29 19:11:58 2013 louis-philippe baron
** Last update Sat Mar 30 02:21:31 2013 louis-philippe baron
*/

#include	"hcorewar.h"

static int	check_reg(char *str, t_list *tmp)
{
  int		i;
  int		nb;

  i = 1;
  while (str[i])
    {
      if (!(str[i]>= '0' && str[i] <= '9'))
	return (INVALID);
      i++;
    }
  nb = my_getnbr(&str[1]);
  if (nb < 1 || nb > REG_NUMBER)
    {
      my_put_error(UNDEF_REG, tmp->pos);
      return (INVALID);
    }
  return (0);
}

static int	check_dir(char *str, t_list *list, t_list *tmp)
{
  int		i;
  int		nb;

  i = 1;
  if (str[i] == LABEL_CHAR)
    return (label_exist(&str[2], list, tmp));
  while (str[i])
    {
      if (str[i] != '-' && !(str[i] >= '0' && str[i] <= '9'))
	return (INVALID);
      i++;
    }
  nb = my_getnbr(&str[1]);
  i = 0;
  while (i < DIR_SIZE)
    {
      nb /= 256;
      i++;
    }
  if (nb)
    my_put_error(WARNING_DIR, tmp->pos);
  return (0);
}

static int	check_ind(char *str, t_list *list, t_list *tmp)
{
  int		i;
  int		nb;

  i = 0;
  if (str[i] == LABEL_CHAR)
    return (label_exist(&str[1], list, tmp));
  while (str[i])
    {
      if (str[i] != '-' && !(str[i] >= '0' && str[i] <= '9'))
	return (INVALID);
      i++;
    }
  if ((nb = my_getnbr(str)) > IDX_MOD)
    my_put_error(WARNING_IND, tmp->pos);
  else
    {
      i = 0;
      while (i++ < IND_SIZE)
	nb /= 256;
      if (nb)
	my_put_error(WARNING_IND, tmp->pos);
    }
  return (0);
}

int		check_type(char *str, t_list *list, t_list *tmp)
{
  int		ret;

  if (str[0] == 'r')
    ret = check_reg(str, tmp);
  else if (str[0] == DIRECT_CHAR)
    ret = check_dir(str, list, tmp);
  else
    ret = check_ind(str, list, tmp);
  return (ret);
}
