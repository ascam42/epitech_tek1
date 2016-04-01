/*
** my_show_wordtab.c for my_show_wordtab in /home/ungaro_l/rendu/Piscine_C_J08/ex_03
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Wed Oct  7 10:36:45 2015 Luca Ungaro
** Last update Thu Dec 10 18:45:39 2015 Luca Ungaro
*/

#include "libmy.h"

int	my_show_wordtab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      my_putstr(tab[i]);
      i += 1;
    }
  return (0);
}

int	my_show_wordtabnb(char **tab, int nb)
{
  int	i;

  i = 0;
  while (i < nb)
    {
      my_putstr(tab[i]);
      i += 1;
    }
  return (0);
}
