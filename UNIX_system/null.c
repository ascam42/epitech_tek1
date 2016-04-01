/*
** null.c for FDP in /home/ungaro_l/rendu/UNIX_system/PSU_2015_my_select
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Fri Dec  4 18:46:58 2015 Luca Ungaro
** Last update Fri Dec  4 18:49:21 2015 Luca Ungaro
*/

#include <unistd.h>

void	*malloc(size_t size)
{
  (void)size;
  return (NULL);
}
