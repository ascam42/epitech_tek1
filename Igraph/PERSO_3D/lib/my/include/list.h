/*
** eval_expr.h for include/struct in /home/vincen_v/rendu/Piscine_C_evalexpr
** 
** Made by valentin vinceno
** Login   <vincen_v@epitech.net>
** 
** Started on  Tue Oct 20 16:39:21 2015 valentin vinceno
** Last update Wed Nov  4 14:28:20 2015 Luca Ungaro
*/

#ifndef LIST_H_
# define LIST_H_
# include "libmy.h"

typedef struct	s_list
{
  char		*data;
  struct s_list	*prev;
  struct s_list	*next;
}		t_list;

/*
** my_put_in_list.c
*/
int	my_put_in_end_dblist(t_list **list, char *data);
int	my_put_in_dblist(t_list **list, char *data);
int	my_put_in_end_list(t_list **list, char *data);
int	my_put_in_list(t_list **list, char *data);
/*
** my_show_list.c
*/
int	my_show_list(t_list *list);
/*
** my_free_list.c
*/
int	my_free_list(t_list *list);
/*
** my_last_elem.c
*/
t_list	*my_last_elem(t_list	*list);

#endif /* !LIST_H_ */
