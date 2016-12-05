/*
** main.c for corewar in /home/garner_p/Workplace/C_Prog_Elem/corewar-2017-baron_l/vm
**
** Made by Garnero Philip
** Login   <garner_p@epitech.net>
**
** Started on  Wed Mar 20 18:09:11 2013 Garnero Philip
** Last update Sat Mar 30 23:07:51 2013 Garnero Philip
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	<sys/types.h>
#include	<sys/stat.h>
#include	<fcntl.h>
#include	"core.h"
#include	"op.h"

int	invert_int(int b)
{
  int	a;

  a = 0;
  a = (b << 24) | ((b << 8) & 0xFF0000) | ((b >> 8) & 0xFF00) | ((b >> 24) & 0xFF);
  return (a);
}

void	mem_dump(unsigned char *arena)
{
  int	i;
  int	count;

  count = 0;
  i = 0;
  while (i < MEM_SIZE)
    {
      my_putnbr_base(arena[i], "0123456789ABCDEF");
      my_putchar(' ');
      i = i + 1;
      count = count + 1;
      if (count == 16)
	{
	  my_putchar('\n');
	  count = 0;
	}
    }
}

unsigned char	*my_strdup(unsigned char *dup, int size)
{
  int		i;
  unsigned char	*dest;

  i = 0;
  dest = my_malloc(size);
  while (i < size)
    {
      dest[i] = dup[i];
      i = i + 1;
    }
  return (dest);
}

unsigned char		*set_champs(unsigned char *arena, t_command *res, t_champ *all, t_list **begin)
{
  int		i;
  t_proc	*cur;

  i = 0;
  while (i < res->total)
    {
      cur = my_malloc(sizeof(t_proc));
      arena = my_strcncpy(all[i].pos, all[i].info.prog_size, arena, all[i].data);
      cur->gen_mem = arena;
      cur->reg = my_malloc(REG_NUMBER * REG_SIZE);
      cur->name = my_strdup(all[i].info.prog_name, my_strlen(all[i].info.prog_name) + 1);
      cur->pc = all[i].pos;
      cur->carry = 1;
      cur->wait = 0;
      cur->id = all[i].id;
      cur->id_proc = all[i].id;
      cur->nbr_live = 0;
      cur->reg[3] = (unsigned char)cur->id;
      my_put_in_list(begin, cur);
      i = i + 1;
    }
  sort(*begin);
  return (arena);
}

int	protect_macros()
{
  if (IND_SIZE != 2)
    return (1);
  if (REG_SIZE != 4)
    return (1);
  if (DIR_SIZE != REG_SIZE)
    return (1);
  if (REG_NUMBER < 1)
    return (1);
  if (MEM_SIZE < 1)
    return (1);
  if (IDX_MODE < 1)
    return (1);
  if (CYCLE_TO_DIE < 1)
    return (1);
  if (CYCLE_DELTA < 1)
    return (1);
  if (NBR_LIVE < 1)
    return (1);
  return (0);
}

int		main(int argc, char **argv)
{
  t_command	cur;
  t_champ	all[4];
  t_list	*begin;
  unsigned char	*arena;
  int		status;
  int		i;

  protect_macros();
  begin = NULL;
  check_command(argc, argv, &cur);
  load_champs(all, &cur);
  arena = my_malloc(MEM_SIZE);
  arena = set_champs(arena, &cur, all, &begin);
  status = begin_games(begin, cur.cycles_to_dump);
  if (cur.cycles_to_dump == -777)
    mem_dump(arena);
  if (status != 0 && status != 5)
    {
      i = 0;
      while (all[i].id != status)
	i = i + 1;
      my_putstr("The player ");
      my_put_nbr(status);
      my_putchar('(');
      my_putstr(all[i].info.prog_name);
      my_putstr(") won the game !\n");
    }
}
