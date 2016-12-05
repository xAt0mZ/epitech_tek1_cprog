/*
** init_arena.c for corewer_vm in /home/garner_p/Workplace/C_Prog_Elem/corewar-2017-baron_l/vm
**
** Made by Garnero Philip
** Login   <garner_p@epitech.net>
**
** Started on  Mon Mar 25 14:15:01 2013 Garnero Philip
** Last update Mon Mar 25 14:54:49 2013 Garnero Philip
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	<sys/types.h>
#include	<sys/stat.h>
#include	<fcntl.h>
#include	"core.h"
#include	"op.h"

int	who_th(t_command *cur)
{
  int	second;
  int	largest;
  int	i;

  largest = cur->beg[0].n;
  second = 0;
  i = 0;
  while (i < 3)
    {
      if (cur->beg[i + 1].n > largest)
	{
	  second = largest;
	  largest = cur->beg[i + 1].n;
	}
      else if (cur->beg[i + 1].n > second)
	second = cur->beg[i + 1].n;
      i = i + 1;
    }
  return (second);
}

void	check_id(t_command *cur)
{
  int	i;
  int	f;
  int	s;
  int	t;
  int	l;

  i = 0;
  if (cur->cycles_to_dump < 0 && cur->cycles_to_dump != -777)
    str_error('\0', 1, NULL);
  while (i < 4)
    {
      if (cur->beg[i].n == MIN(MIN(cur->beg[0].n, cur->beg[1].n), MIN(cur->beg[2].n, cur->beg[3].n)))
	f = i;
      else if (cur->beg[i].n == who_th(cur))
	t = i;
      else if (cur->beg[i].n == MAX(MAX(cur->beg[0].n, cur->beg[1].n), MAX(cur->beg[2].n, cur->beg[3].n)))
	l = i;
      else
	s = i;
      i = i + 1;
    }
  cur->beg[f].n = 1;
  cur->beg[s].n = 2;
  cur->beg[t].n = 3;
  cur->beg[l].n = 4;
}

void	init_command(t_command *cur)
{
  cur->cycles_to_dump = -777;
  cur->total = 0;
  cur->beg[0].n = 1;
  cur->beg[1].n = 2;
  cur->beg[2].n = 3;
  cur->beg[3].n = 4;
  cur->beg[0].a = 0;
  cur->beg[1].a = 0;
  cur->beg[2].a = 0;
  cur->beg[3].a = 0;
  cur->beg[0].path = NULL;
  cur->beg[1].path = NULL;
  cur->beg[2].path = NULL;
  cur->beg[3].path = NULL;
}

int	set_dist(t_command *cur, t_champ *all)
{
  int	i;
  int	size_max;

  i = 0;
  size_max = 0;
  while (i < cur->total)
    all[i++].pos = 0;
  i = 0;
  while (i < cur->total)
    {
      all[i].id = cur->beg[i].n;
      all[i].pos = cur->beg[i].a;
      size_max = size_max + all[i].info.prog_size;
      i = i + 1;
    }
  size_max = (MEM_SIZE - size_max) / cur->total;
  i = 0;
  while (i < cur->total)
    {
      if (all[i].pos == 0)
	if (i != 0)
	  all[i].pos = all[i - 1].pos + all[i - 1].info.prog_size + size_max % MEM_SIZE;
      i = i + 1;
    }
}

int	load_champs(t_champ *all, t_command *cur)
{
  int	i;
  int	bytes;
  int	fd;

  i = 0;
  while (i < cur->total)
    {
      if ((fd = open(cur->beg[i].path, O_RDONLY)) == -1)
	str_error('\0', 2, cur->beg[i].path);
      read(fd, &(all[i]).info, sizeof(t_header));
      all[i].info.magic = invert_int(all[i].info.magic);
      all[i].info.prog_size = invert_int(all[i].info.prog_size);
      if (all[i].info.magic != COREWAR_EXEC_MAGIC)
	exit(2);
      all[i].data = my_malloc(all[i].info.prog_size + 1);
      if ((bytes = read(fd, all[i].data, all[i].info.prog_size)) == -1)
	exit(3);
      i = i + 1;
    }
  set_dist(cur, all);
}
