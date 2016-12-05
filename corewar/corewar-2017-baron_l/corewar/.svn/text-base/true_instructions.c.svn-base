/*
** true_instructions.c for corewar_vm in /home/garner_p/Workplace/C_Prog_Elem/vm
**
** Made by Garnero Philip
** Login   <garner_p@epitech.net>
**
** Started on  Mon Mar 25 22:34:43 2013 Garnero Philip
** Last update Sat Mar 30 22:02:36 2013 Garnero Philip
*/

#include	<stdlib.h>
#include	"core.h"
#include	"op.h"

int		t_live(t_list **begin, int i)
{
  t_list	*tmp;

  if (i < 1 || i > 4)
    return (1);
  tmp = *begin;
  while (tmp && tmp->cur->id != i)
    tmp = tmp->next;
  if (tmp)
    {
      tmp->cur->nbr_live = tmp->cur->nbr_live + 1;
      my_putstr("The player ");
      my_put_nbr(tmp->cur->id);
      my_putchar('(');
      my_putstr(tmp->cur->name);
      my_putstr(") is still alive !\n");
    }
  return (0);
}

int	t_ld(t_list *tmp, unsigned char *load, int where)
{
  int	i;
  int	j;

  if (load == NULL)
    return (1);
  if (where < 1 || where > REG_NUMBER)
    where = 1;
  j = (where * REG_SIZE) - REG_SIZE;
  i = 0;
  while (i < REG_SIZE)
    {
      tmp->cur->reg[(j + i) % (REG_SIZE * REG_NUMBER)] = load[i];
      i = i + 1;
    }
  if (put_char_into_long(load, REG_SIZE) == 0)
    tmp->cur->carry = 0;
  else
    tmp->cur->carry = 1;
}

int	t_st(t_list *tmp, unsigned char *load, int where)
{
  int	i;
  int	j;

  if (load == NULL)
    return (1);
  j = 0;
  if (UC(UC(AM[cir(PC + 1)] << 2) >> 6) == 1)
    {
      where = (int)AM[cir(where)];
      if (where < 1 || where > REG_NUMBER)
	where = 1;
      i = (where * REG_SIZE) - REG_SIZE;
      while (j < REG_SIZE)
	{
	  tmp->cur->reg[(i + j) % (REG_SIZE * REG_NUMBER)] = load[j];
	  j = j + 1;
	}
      PC = PC + 4;
    }
  else if (UC(UC(AM[cir(PC + 1)] << 2) >> 6) == 3)
    {
      i = return_ind_place(tmp, where, 1);
      while (j < REG_SIZE)
	{
	  AM[cir(PC + i + j)] = load[j];
	  j = j + 1;
	}
      PC = PC + IND_SIZE + 3;
    }
}

int		t_sti(t_list *tmp, long long i, int where, unsigned char *load)
{
  long long	j;
  int		c;

  if (load == NULL)
    return (1);
  if (UC(UC(AM[cir(PC + 1)] << 4) >> 6) == 1)
    j = put_char_into_long(return_reg(tmp, (int)AM[cir(where)]), REG_SIZE);
  else if (UC(UC(AM[cir(PC + 1)] << 4) >> 6) == 2)
    j = return_ind_place(tmp, where, 1);
  c = 0;
  while (c < REG_SIZE)
    {
      AM[cir(PC + i + j + c)] = load[c];
      c = c + 1;
    }
  if (UC(UC(AM[cir(PC + 1)] << 4) >> 6) == 1)
    PC = where + 1;
  else if (UC(UC(AM[cir(PC + 1)] << 4) >> 6) == 2)
    PC = where + IND_SIZE;
  my_free(load);
}

int	t_ldi(t_list *tmp, long long i, int where)
{
  int	j;
  int	c;

  where = (int)AM[cir(where)];
  if (where < 1 || where > REG_NUMBER)
    where = 1;
  j = (where * REG_SIZE) - REG_SIZE;
  c = 0;
  while (c < REG_SIZE)
    {
      tmp->cur->reg[j % (REG_SIZE * REG_NUMBER)] = AM[cir(PC + i + c)];
      j = j + 1;
      c = c + 1;
    }
  if (put_char_into_long(return_reg(tmp, where), REG_SIZE) == 0)
    tmp->cur->carry = 0;
  else
    tmp->cur->carry = 1;
}

