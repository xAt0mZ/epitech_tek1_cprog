/*
** subtraction.c for infin_add in /exam//rendu/ex_4
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Nov  8 10:15:52 2012 louis-philippe baron
** Last update Fri Nov  9 19:19:03 2012 louis-philippe baron
*/

int		swap_same_size(char **nb1, char **nb2, char *base)
{
  int		i;
  int		p1;
  int		p2;
  char		*nb_1;
  char		*nb_2;

  nb_1 = *nb1;
  nb_2 = *nb2;
  i = 0;
  p1 = 0;
  p2 = 0;
  while (nb_1[i] == nb_2[i])
    i++;
  while (base[p1] != nb_1[i])
    p1++;
  while (base[p2] != nb_2[i])
    p2++;
  i = 1;
  if (p1 < p2)
    {
      i = 2;
      my_swap(nb1, nb2);
    }
  return (i);
}

int		swap_or_not(char **nb1, char **nb2)
{
  if (my_strlen(*nb1) < my_strlen(*nb2))
    {
      my_swap(nb1, nb2);
      return (2);
    }
  else
    return (1);
}

int		calc(char *base, char nb1, char nb2, int *ret)
{
  int		stock;
  
  if (get_val(base, nb1) >= get_val(base, nb2))
    {
      stock = get_val(base, nb1) - get_val(base, nb2) - *ret;
      *ret = 0;
    }
  else
    {      
      stock = (get_val(base, nb1) + my_strlen(base)) - get_val(base, nb2) - *ret;
      *ret = 1;
    }
  return (stock);
}


void		do_subtraction(char *nb1, char *nb2, char *res, char *base)
{
  int		s_1;
  int		s_2;
  int		s_m;
  int		ret;
  int		stock;
  
  swap_or_not(&nb1, &nb2);
  s_1 = my_strlen(nb1) - 1;
  s_2 = my_strlen(nb2) - 1;
  s_m = who_is_longer(nb1, nb2) + 1;
  ret = 0;  
  while (0 < s_m && 0 <= s_1)
    {
      s_m--;
      if (s_2 == 0 && s_1 != my_strlen(nb1) - my_strlen(nb2))
	nb2[s_2] = base[0];
      stock = calc(base, nb1[s_1], nb2[s_2], &ret);
      res[s_m] = base[stock];
      s_1--;
      if (0 <= s_2)
	s_2--;
    }
}
