/*
** my_free_list.c for bistro in /home/ungaro_l/rendu/Piscine_C_bistromathique
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Fri Oct 30 18:39:10 2015 Luca Ungaro
** Last update Wed Nov  4 10:55:00 2015 Luca Ungaro
*/

#include "list.h"

int		my_free_list(t_list *list)
{
  t_list	*tmp;

  while (tmp)
    {
      tmp = list;
      list = list->next;
      free(tmp);
    }
  free(list);
  return (0);
}
