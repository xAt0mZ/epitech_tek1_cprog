/*
** cmd.c for corewar in /home/bajeux_m//bajeux_m/B2/Cprogelem/Corewar
**
** Made by maxime bajeux
** Login   <bajeux_m@epitech.net>
**
** Started on  Mon Mar 25 17:29:34 2013 maxime bajeux
** Last update Sat Mar 30 22:01:34 2013 Garnero Philip
*/

#include	"core.h"

extern void	t_add(t_list *tmp, int r1, int r2, int r3)
{
  int		i;
  int		ret;

  ret = 0;
  i = 0;
  while (i < REG_SIZE)
    {
      if (((int)tmp->cur->reg[(r1 - i) % (REG_SIZE * REG_NUMBER)] +
	   (int)tmp->cur->reg[(r2 - i) % (REG_SIZE * REG_NUMBER)] + ret) >= 256)
	{
	  tmp->cur->reg[(r3 - i) % (REG_SIZE * REG_NUMBER)] =
	    ((int)tmp->cur->reg[(r1 - i) % (REG_SIZE * REG_NUMBER)] + (int)
	     tmp->cur->reg[(r2 - i) % (REG_SIZE * REG_NUMBER)] + ret) % 256;
	  ret = 1;
	}
      else
	{
	  tmp->cur->reg[(r3 - i) % (REG_SIZE * REG_NUMBER)] =
	    (int)tmp->cur->reg[(r1 - i) % (REG_SIZE * REG_NUMBER)] + (int)
	    tmp->cur->reg[(r2 - i) % (REG_SIZE * REG_NUMBER)] + ret;
	  ret = 0;
	}
      i = i + 1;
    }
  if (put_char_into_long(return_reg(tmp, ((r3 + 1) / 4)), REG_SIZE) == 0)
    tmp->cur->carry = 0;
  else
    tmp->cur->carry = 1;
}

extern void	t_sub(t_list *tmp, int r1, int r2, int r3)
{
  int		i;
  int		ret;

  ret = 0;
  i = 0;
  while (i < REG_SIZE)
    {
      if (((int)tmp->cur->reg[(r1 - i) % (REG_SIZE * REG_NUMBER)] -
	   ((int)tmp->cur->reg[(r2 - i) % (REG_SIZE * REG_NUMBER)] + ret)) < 0)
	{
	  tmp->cur->reg[(r3 - i) % (REG_SIZE * REG_NUMBER)] =
	    ((int)tmp->cur->reg[(r1 - i) % (REG_SIZE * REG_NUMBER)] + 256)
	    - ((int)tmp->cur->reg[(r2 - i) % (REG_SIZE * REG_NUMBER)] + ret);
	  ret = 1;
	}
      else
	{
	  tmp->cur->reg[(r3 - i) % (REG_SIZE * REG_NUMBER)] =
	    (int)tmp->cur->reg[(r1 - i) % (REG_SIZE * REG_NUMBER)] -
	    ((int)tmp->cur->reg[(r2 - i) % (REG_SIZE * REG_NUMBER)] + ret);
	  ret = 0;
	}
      i = i + 1;
    }
  if (put_char_into_long(return_reg(tmp, ((r3 + 1) / 4)), REG_SIZE) == 0)
    tmp->cur->carry = 0;
  else
    tmp->cur->carry = 1;
}

extern void	t_and(t_list *tmp, char* p1, char* p2, int where)
{
  int		i;
  int		j;

  i = (int)AM[cir(where)];
  if (i < 1 || i > REG_NUMBER)
    i = 1;
  i = (i * REG_SIZE) - REG_SIZE;
  j = 0;
  while (j < REG_SIZE)
    {
      tmp->cur->reg[(i + j) % (REG_SIZE * REG_NUMBER)] = p1[j] & p2[j];
      i++;
      j++;
    }
  if (put_char_into_long(return_reg(tmp, ((i + REG_SIZE) / 4)), REG_SIZE) == 0)
    tmp->cur->carry = 0;
  else
    tmp->cur->carry = 1;
}

extern void	t_or(t_list *tmp, char* p1, char* p2, int where)
{
  int		i;
  int		j;

  i = (int)AM[cir(where)];
  if (i < 1 || i > REG_NUMBER)
    i = 1;
  i = (i * REG_SIZE) - REG_SIZE;
  j = 0;
  while (j < REG_SIZE)
    {
      tmp->cur->reg[(i + j) % (REG_SIZE * REG_NUMBER)] = p1[j] | p2[j];
      i++;
      j++;
    }
  if (put_char_into_long(return_reg(tmp, ((i + REG_SIZE) / 4)), REG_SIZE) == 0)
    tmp->cur->carry = 0;
  else
    tmp->cur->carry = 1;
}

extern void	t_xor(t_list *tmp, char* p1, char* p2, int where)
{
  int		i;
  int		j;

  i = (int)AM[cir(where)];
  if (i < 1 || i > REG_NUMBER)
    i = 1;
  i = (i * REG_SIZE) - REG_SIZE;
  j = 0;
  while (j < REG_SIZE)
    {
      tmp->cur->reg[(i + j) % (REG_SIZE * REG_NUMBER)] = p1[j] ^ p2[j];
      i++;
      j++;
    }
  if (put_char_into_long(return_reg(tmp, ((i + REG_SIZE) / 4)), REG_SIZE) == 0)
    tmp->cur->carry = 0;
  else
    tmp->cur->carry = 1;
}

