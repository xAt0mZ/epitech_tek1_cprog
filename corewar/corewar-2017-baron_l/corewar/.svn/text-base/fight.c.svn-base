/*
** fight.c for corewar_vm in /home/garner_p/Workplace/C_Prog_Elem/corewar-2017-baron_l/vm
**
** Made by Garnero Philip
** Login   <garner_p@epitech.net>
**
** Started on  Mon Mar 25 14:50:21 2013 Garnero Philip
** Last update Sat Mar 30 22:23:03 2013 Garnero Philip
*/

#include	<stdlib.h>
#include	"core.h"
#include	"op.h"

int		delete_champ(t_list **begin, int id)
{
  t_list	*tmp;

  tmp = *begin;
  while (tmp)
    {
      if (tmp->cur->id == id)
	{
	  delete_mail(begin, tmp);
	  tmp = *begin;
	  if (tmp == NULL)
	    return (id);
	}
      else
	tmp = tmp->next;
    }
  return (0);
}

int		check_dead_champ(t_list **begin)
{
  t_list	*tmp;
  int		winner;

  tmp = *begin;
  while (tmp && tmp->cur->id_proc < 5)
    {
      if (tmp->cur->nbr_live < 1)
	{
	  my_putstr(tmp->cur->name);
	  my_putstr(" died !\n");
	  if ((winner = delete_champ(begin, tmp->cur->id)) != 0)
	    return (winner);
	  tmp = *begin;
	}
      else
	tmp = tmp->next;
    }
  tmp = *begin;
  while (tmp)
    {
      tmp->cur->nbr_live = 0;
      tmp = tmp->next;
    }
}

void	main_forest(t_list **begin, t_list *tmp)
{
  int	(*tab[16])(t_list **, t_list *);

  tab[0] = l_live;
  tab[1] = l_ld;
  tab[2] = l_st;
  tab[3] = l_add;
  tab[4] = l_sub;
  tab[5] = l_and;
  tab[6] = l_or;
  tab[7] = l_xor;
  tab[8] = l_zjmp;
  tab[9] = l_ldi;
  tab[10] = l_sti;
  tab[11] = l_fork;
  tab[12] = l_lld;
  tab[13] = l_lldi;
  tab[14] = l_lfork;
  tab[15] = l_aff;
  if (AM[cir(PC)] <= 16 && AM[cir(PC)] > 0)
    tab[AM[cir(PC)] - 1](begin, tmp);
  else
    PC = PC + 1;
}

int		time_to_play(t_list **begin)
{
  t_list	*tmp;
  int		nbr_live;

  tmp = *begin;
  nbr_live = 0;
  while (tmp)
    {
      if (tmp->cur->wait == 0)
	main_forest(begin, tmp);
      else if (tmp->cur->wait == 1)
	{
	  main_forest(begin, tmp);
	  tmp->cur->wait = tmp->cur->wait - 1;
	}
      else
	tmp->cur->wait = tmp->cur->wait - 1;
      PC = cir(PC);
      nbr_live = nbr_live + tmp->cur->nbr_live;
      tmp = tmp->next;
    }
  if (nbr_live >= NBR_LIVE)
    return (1);
  return (0);
}

int	manage_cur_cycle(int ctd, int *cycles_to_dump, t_list **begin)
{
  while (ctd > 0)
    {
      if ((*cycles_to_dump)-- == 0)
	{
	  mem_dump((*begin)->cur->gen_mem);
	  return (5);
	}
      if (time_to_play(begin) == 1)
	return (check_dead_champ(begin));
      ctd = ctd - 1;
    }
  return (check_dead_champ(begin));
}

int	begin_games(t_list *begin, int cycles_to_dump)
{
  int	n;
  int	ctd;
  int	exit;

  n = 0;
  while (begin)
    {
      if (n * CYCLE_DELTA >= CYCLE_TO_DIE)
	ctd = 1;
      else
	ctd = CYCLE_TO_DIE - (n * CYCLE_DELTA);
      if ((exit = manage_cur_cycle(ctd, &cycles_to_dump, &begin)) != 0)
	return (exit);
      n = n + 1;
    }
}
