/*
** l_inst.c for corewar_vm in /home/garner_p/Workplace/C_Prog_Elem/corewar-2017-baron_l/vm
**
** Made by Garnero Philip
** Login   <garner_p@epitech.net>
**
** Started on  Mon Mar 25 19:30:13 2013 Garnero Philip
** Last update Sat Mar 30 22:23:31 2013 Garnero Philip
*/

#include	<stdlib.h>
#include	"core.h"
#include	"op.h"

int	l_live(t_list **begin, t_list *tmp)
{
  int	i;
  int	a;
  int	b;
  int	c;
  int	d;

  if (tmp->cur->wait == 0)
    tmp->cur->wait = 10;
  else if (tmp->cur->wait == 1)
    {
      i = 0;
      a = AM[cir(PC + 1)];
      b = AM[cir(PC + 2)];
      c = AM[cir(PC + 3)];
      d = AM[cir(PC + 4)];
      i = (a << 24) | (b << 16) | (c << 8) | d;
      t_live(begin, i);
      PC = PC + 5;
    }
  return (0);
}

int		l_ld(t_list **begin, t_list *tmp)
{
  unsigned char	*to_load;
  int		where;

  to_load = NULL;
  if (tmp->cur->wait == 0)
    tmp->cur->wait = 5;
  else if (tmp->cur->wait == 1)
    {
      if (UC(AM[cir(PC + 1)] >> 6) == 2)
	{
	  to_load = return_dir(tmp, PC + 2);
	  where = (int)AM[cir(PC + 2 + DIR_SIZE)];
	  PC = PC + 3 + DIR_SIZE;
	}
      else if (UC(AM[cir(PC + 1)] >> 6) == 3)
	{
	  to_load = return_ind(tmp, PC + 2, 1, REG_SIZE);
	  where = (int)AM[cir(PC + 2 + IND_SIZE)];
	  PC = PC + 3 + IND_SIZE;
	}
      t_ld(tmp, to_load, where);
    }
}

int		l_st(t_list **begin, t_list *tmp)
{
  unsigned char	*to_load;
  int		where;

  to_load = NULL;
  if (tmp->cur->wait == 0)
    tmp->cur->wait = 5;
  else if (tmp->cur->wait == 1)
    {
      to_load = return_reg(tmp, (int)AM[cir(PC + 2)]);
      where = PC + 3;
      t_st(tmp, to_load, where);
    }
}

int	l_add(t_list **begin, t_list *tmp)
{
  int	r1;
  int	r2;
  int	r3;

  if (tmp->cur->wait == 0)
    tmp->cur->wait = 10;
  else if (tmp->cur->wait == 1)
    {
      r1 = (int)AM[cir(PC + 1)];
      r2 = (int)AM[cir(PC + 2)];
      r3 = (int)AM[cir(PC + 3)];
      if (r1 < 1 || r1 > 16)
	r1 = 1;
      if (r2 < 1 || r2 > 16)
	r2 = 1;
      if (r3 < 1 || r3 > 16)
	r3 = 1;
      r1 = (r1 * REG_SIZE) - 1;
      r2 = (r2 * REG_SIZE) - 1;
      r3 = (r3 * REG_SIZE) - 1;
      t_add(tmp, r1, r2, r3);
      PC = PC + 4;
    }
}

int	l_sub(t_list **begin, t_list *tmp)
{
  int	r1;
  int	r2;
  int	r3;

  if (tmp->cur->wait == 0)
    tmp->cur->wait = 10;
  else if (tmp->cur->wait == 1)
    {
      r1 = (int)AM[cir(PC + 1)];
      r2 = (int)AM[cir(PC + 2)];
      r3 = (int)AM[cir(PC + 3)];
      if (r1 < 1 || r1 > 16)
	r1 = 1;
      if (r2 < 1 || r2 > 16)
	r2 = 1;
      if (r3 < 1 || r3 > 16)
	r3 = 1;
      r1 = (r1 * REG_SIZE) - 1;
      r2 = (r2 * REG_SIZE) - 1;
      r3 = (r3 * REG_SIZE) - 1;
      t_sub(tmp, r1, r2, r3);
      PC = PC + 4;
    }
}

unsigned char	*load_second(t_list *tmp, int *where, int place)
{
  char	*load2;

  if (UC(UC(AM[cir(PC + 1)] << 4) >> 6) == 1)
    {
      load2 = return_reg(tmp, (int)AM[cir(place)]);
      *where = place + 1;
    }
  else if (UC(UC(AM[cir(PC + 1)] << 4) >> 6) == 2)
    {
      load2 = return_dir(tmp, place);
      *where = place + DIR_SIZE;
    }
  else if (UC(UC(AM[cir(PC + 1)] << 4) >> 6) == 3)
    {
      load2 = return_ind(tmp, place, 1, REG_SIZE);
      *where = place + IND_SIZE;
    }
  else
    return (NULL);
  return (load2);
}

int	l_and(t_list **begin, t_list *tmp)
{
  char	*load1;
  char	*load2;
  int	where;

  if (tmp->cur->wait == 0)
    tmp->cur->wait = 6;
  else if (tmp->cur->wait == 1)
    {
      if (UC(UC(AM[cir(PC + 1)] << 2) >> 6) == 1)
	{
	  load1 = return_reg(tmp, (int)AM[cir(PC + 2)]);
	  if ((load2 = load_second(tmp, &where, PC + 3)) == NULL)
	    tmp->cur->carry = 1;
	}
      else if (UC(UC(AM[cir(PC + 1)] << 2) >> 6) == 2)
	{
	  load1 = return_dir(tmp, PC + 2);
	  if ((load2 = load_second(tmp, &where, PC + 2 + DIR_SIZE)) == NULL)
	    tmp->cur->carry = 1;
	}
      else if (UC(UC(AM[cir(PC + 1)] << 2) >> 6) == 3)
	{
	  load1 = return_dir(tmp, PC + 2);
	  if ((load2 = load_second(tmp, &where, PC + 2 + IND_SIZE)) == NULL)
	    tmp->cur->carry = 1;
	}
      else
	load1 = NULL;
      if (load2 != NULL && load1 != NULL)
	t_and(tmp, load1, load2, where);
      PC = where + 1;
    }
}

int	l_or(t_list **begin, t_list *tmp)
{
  char	*load1;
  char	*load2;
  int	where;

  if (tmp->cur->wait == 0)
    tmp->cur->wait = 6;
  else if (tmp->cur->wait == 1)
    {
      if (UC(UC(AM[cir(PC + 1)] << 2) >> 6) == 1)
	{
	  load1 = return_reg(tmp, (int)AM[cir(PC + 2)]);
	  if ((load2 = load_second(tmp, &where, PC + 3)) == NULL)
	    tmp->cur->carry = 1;
	}
      else if (UC(UC(AM[cir(PC + 1)] << 2) >> 6) == 2)
	{
	  load1 = return_dir(tmp, PC + 2);
	  if ((load2 = load_second(tmp, &where, PC + 2 + DIR_SIZE)) == NULL)
	    tmp->cur->carry = 1;
	}
      else if (UC(UC(AM[cir(PC + 1)] << 2) >> 6) == 3)
	{
	  load1 = return_dir(tmp, PC + 2);
	  if ((load2 = load_second(tmp, &where, PC + 2 + IND_SIZE)) == NULL)
	    tmp->cur->carry = 1;
	}
      else
	load1 = NULL;
      if (load2 != NULL && load1 != NULL)
	t_or(tmp, load1, load2, where);
      PC = where + 1;
    }
}

int	l_xor(t_list **begin, t_list *tmp)
{
  char	*load1;
  char	*load2;
  int	where;

  if (tmp->cur->wait == 0)
    tmp->cur->wait = 6;
  else if (tmp->cur->wait == 1)
    {
      if (UC(UC(AM[cir(PC + 1)] << 2) >> 6) == 1)
	{
	  load1 = return_reg(tmp, (int)AM[cir(PC + 2)]);
	  if ((load2 = load_second(tmp, &where, PC + 3)) == NULL)
	    tmp->cur->carry = 1;
	}
      else if (UC(UC(AM[cir(PC + 1)] << 2) >> 6) == 2)
	{
	  load1 = return_dir(tmp, PC + 2);
	  if ((load2 = load_second(tmp, &where, PC + 2 + DIR_SIZE)) == NULL)
	    tmp->cur->carry = 1;
	}
      else if (UC(UC(AM[cir(PC + 1)] << 2) >> 6) == 3)
	{
	  load1 = return_dir(tmp, PC + 2);
	  if ((load2 = load_second(tmp, &where, PC + 2 + IND_SIZE)) == NULL)
	    tmp->cur->carry = 1;
	}
      else
	load1 = NULL;
      if (load2 != NULL && load1 != NULL)
	t_xor(tmp, load1, load2, where);
      PC = where + 1;
    }
}

int	l_zjmp(t_list **begin, t_list *tmp)
{
  int	i;

  if (tmp->cur->wait == 0)
    tmp->cur->wait = 20;
  else if (tmp->cur->wait == 1)
    {
      if (tmp->cur->carry == 1)
	{
	  PC = PC + IND_SIZE + 1;
	  return (0);
	}
      i = return_ind_place(tmp, PC + 1, 1);
      PC = PC + i;
    }
}

int		l_ldi(t_list **begin, t_list *tmp)
{
  long long	i;
  long long	j;
  int    	where;

  if (tmp->cur->wait == 0)
    tmp->cur->wait = 25;
  else if (tmp->cur->wait == 1)
    {
      if (UC(AM[cir(PC + 1)] >> 6) == 1)
	{
	  i = put_char_into_long(return_reg(tmp, (int)AM[cir(PC + 2)]), REG_SIZE);
	  where = PC + 3;
	}
      else if (UC(AM[cir(PC + 1)] >> 6) == 2 || UC(AM[cir(PC + 1)] >> 6) == 3)
	{
	  if (UC(AM[cir(PC + 1)] >> 6) == 2)
	    i = return_ind_place(tmp, PC + 2, 1);
	  else if (UC(AM[cir(PC + 1)] >> 6) == 3)
	    i = put_char_into_long(return_ind(tmp, PC + 2, 1, IND_SIZE), IND_SIZE);
	  where = PC + 2 + IND_SIZE;
	}
      if (UC(UC(AM[cir(PC + 1)] << 2) >> 6) == 1)
	{
	  j = put_char_into_long(return_reg(tmp, (int)AM[cir(where)]), REG_SIZE);
	  where = where + 1;
	}
      else if (UC(UC(AM[cir(PC + 1)] << 2) >> 6) == 2)
	{
	  j = return_ind_place(tmp, where, 1);
	  where = where + IND_SIZE;
	}
      t_ldi(tmp, i + j, where);
      PC = where + 1;
    }
}

int		l_sti(t_list **begin, t_list *tmp)
{
  unsigned char	*to_load;
  long long	i;
  int    	where;

  to_load = NULL;
  if (tmp->cur->wait == 0)
    tmp->cur->wait = 25;
  else if (tmp->cur->wait == 1)
    {
      to_load = return_reg(tmp, (int)AM[cir(PC + 2)]);
      if (UC(UC(AM[cir(PC + 1)] << 2) >> 6) == 1)
	{
	  i = put_char_into_long(return_reg(tmp, (int)AM[cir(PC + 3)]), REG_SIZE);
	  where = PC + 4;
	}
      else if (UC(UC(AM[cir(PC + 1)] << 2) >> 6) == 2 || UC(UC(AM[cir(PC + 1)] << 2) >> 6) == 3)
	{
	  i = return_ind_place(tmp, PC + 3, 1);
	  where = PC + 3 + IND_SIZE;
	}
      t_sti(tmp, i, where, to_load);
    }
}

int		l_fork(t_list **begin, t_list *tmp)
{
  t_proc	*new;
  t_list	*scd;

  if (tmp->cur->wait == 0)
    tmp->cur->wait = 800;
  else if (tmp->cur->wait == 1)
    {
      scd = *begin;
      while (scd->next)
	scd = scd->next;
      new = my_malloc(sizeof(t_proc));
      new->gen_mem = AM;
      new->reg = my_strdup(tmp->cur->reg, REG_SIZE * REG_NUMBER);
      new->name = my_strdup(tmp->cur->name, my_strlen(tmp->cur->name) + 1);
      new->pc = (int)return_ind_place(tmp, PC + 1, 1) + PC;
      new->carry = tmp->cur->carry;
      new->wait = tmp->cur->wait;
      new->id = tmp->cur->id;
      new->id_proc = scd->cur->id_proc + 4;
      new->nbr_live = 0;
      my_put_in_list(begin, new);
      PC = PC + 1 + IND_SIZE;
    }
}

int		l_lld(t_list **begin, t_list *tmp)
{
  unsigned char	*to_load;
  int		where;

  to_load = NULL;
  if (tmp->cur->wait == 0)
    tmp->cur->wait = 10;
  else if (tmp->cur->wait == 1)
    {
      if (UC(AM[cir(PC + 1)] >> 6) == 2)
	{
	  to_load = return_dir(tmp, PC + 2);
	  where = (int)AM[cir(PC + 2 + DIR_SIZE)];
	  PC = PC + 3 + DIR_SIZE;
	}
      else if (UC(AM[cir(PC + 1)] >> 6) == 3)
	{
	  to_load = return_ind(tmp, PC + 2, 0, REG_SIZE);
	  where = (int)AM[cir(PC + 2 + IND_SIZE)];
	  PC = PC + 3 + IND_SIZE;
	}
      t_ld(tmp, to_load, where);
    }
}

int	l_lldi(t_list **begin, t_list *tmp)
{
  long long	i;
  long long	j;
  int    	where;

  if (tmp->cur->wait == 0)
    tmp->cur->wait = 50;
  else if (tmp->cur->wait == 1)
    {
      if (UC(AM[cir(PC + 1)] >> 6) == 1)
	{
	  i = put_char_into_long(return_reg(tmp, (int)AM[cir(PC + 2)]), REG_SIZE);
	  where = PC + 3;
	}
      else if (UC(AM[cir(PC + 1)] >> 6) == 2 || UC(AM[cir(PC + 1)] >> 6) == 3)
	{
	  if (UC(AM[cir(PC + 1)] >> 6) == 2)
	    i = return_ind_place(tmp, PC + 2, 0);
	  else if (UC(AM[cir(PC + 1)] >> 6) == 3)
	    i = put_char_into_long(return_ind(tmp, PC + 2, 0, IND_SIZE), IND_SIZE);
	  where = PC + 2 + IND_SIZE;
	}
      if (UC(UC(AM[cir(PC + 1)] << 2) >> 6) == 1)
	{
	  j = put_char_into_long(return_reg(tmp, (int)AM[cir(where)]), REG_SIZE);
	  where = where + 1;
	}
      else if (UC(UC(AM[cir(PC + 1)] << 2) >> 6) == 2)
	{
	  j = return_ind_place(tmp, where, 0);
	  where = where + IND_SIZE;
	}
      t_ldi(tmp, i + j, where);
      PC = where + 1;
    }
}

int	l_lfork(t_list **begin, t_list *tmp)
{
  t_proc	*new;
  t_list	*scd;

  if (tmp->cur->wait == 0)
    tmp->cur->wait = 1000;
  else if (tmp->cur->wait == 1)
    {
      scd = *begin;
      while (scd->next)
	scd = scd->next;
      new = my_malloc(sizeof(t_proc));
      new->gen_mem = AM;
      new->reg = my_strdup(tmp->cur->reg, REG_SIZE * REG_NUMBER);
      new->name = my_strdup(tmp->cur->name, my_strlen(tmp->cur->name) + 1);
      new->pc = (int)return_ind_place(tmp, PC + 1, 0) + PC;
      new->carry = tmp->cur->carry;
      new->wait = tmp->cur->wait;
      new->id = tmp->cur->id;
      new->id_proc = scd->cur->id_proc + 4;
      new->nbr_live = 0;
      my_put_in_list(begin, new);
      PC = PC + 1 + IND_SIZE;
    }
}

int	l_aff(t_list **begin, t_list *tmp)
{
  if (tmp->cur->wait == 0)
    tmp->cur->wait = 2;
  else if (tmp->cur->wait == 1)
    {
      my_putchar((char)put_char_into_long
		 (return_reg(tmp, (int)AM[cir(PC + 2)]), REG_SIZE) % 256);
      PC = PC + 3;
    }
  return (0);
}
