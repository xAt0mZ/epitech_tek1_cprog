/*
** put_neg.c for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique/baron_l/ops
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sat Nov 10 19:32:25 2012 louis-philippe baron
** Last update Sat Nov 10 21:35:06 2012 louis-philippe baron
*/

int		are_the_nbrs_neg(char **nb1, char **nb2, char *ops)
{
  if (nb1[0][0] != ops[3] && nb2[0][0] != ops[3])
    return (0);
  else if (nb1[0][0] == ops[3] && nb2[0][0] != ops[3])
    {
      *nb1 = &nb1[0][1];
      return (1);
    }
  else if (nb1[0][0] != ops[3] && nb2[0][0] == ops[3])
    {
      *nb2 = &nb2[0][1];
      return (3);
    }
  else if (nb1[0][0] == ops[3] && nb2[0][0] == ops[3])
    {
      *nb1 = &nb1[0][1];
      *nb2 = &nb2[0][1];
      return (5);
    }
  return (0);
}

void		put_neg_for_add(char *res, int neg, int swap, char *ops)
{
  if (neg == 1 && (swap == 0 || swap == 2))
    res[0] = ops[3];
  else if (neg == 3 && (swap == 1 || swap == 3))
    res[0] = ops[3];
  else if (neg == 5)
    res[0] = ops[3];
}

void		put_neg_for_sub(char *res, int neg, int swap, char *ops)
{
  if (neg == 0 && (swap == 1 || swap == 3))
    res[0] = ops[3];
  else if (neg == 5 && (swap == 0 || swap == 2))
    res[0] = ops[3];
  else if (neg == 1)
    res[0] = ops[3];
}
