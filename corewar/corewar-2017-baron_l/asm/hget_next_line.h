/*
** get_next_line.h for get_next_line in /home/garner_p/Workplace/getnextline-2017-garner_p
** 
** Made by Garnero Philip
** Login   <garner_p@epitech.net>
** 
** Started on  Wed Nov 21 15:02:35 2012 Garnero Philip
** Last update Fri Mar 29 18:22:02 2013 louis-philippe baron
*/

#ifndef _GET_NEXT_LINE
#define _GET_NEXT_LINE

typedef struct		s_charlist
{
  char			letter;
  struct s_charlist	*next;
}			t_charlist;

char		*get_next_line(const int fd);
t_charlist	*do_list(t_charlist **charlist, char *buffer, int bytes, int fd);
int		my_put_in_char_list(t_charlist **list, char letter);
char		*malloc_put_free(t_charlist *scd, t_charlist **tmp);
char		*starter(t_charlist **charlist, char *buffer, int bytes, int fd);
int		liberator(int a, t_charlist *scd, t_charlist **tmp);

#define READ_AMOUNT 2

#endif /* _GET_NEXT_LINE */
