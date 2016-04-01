/*
** read_test.c for test in /home/ungaro_l/rendu/C_prog_elem/BACKUP
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Wed Jan  6 12:38:48 2016 Luca Ungaro
** Last update Wed Jan  6 12:40:02 2016 Luca Ungaro
*/

#include <unistd.h>

ssize_t	read(int fd, void *buffer, size_t count)
{
  (void)fd;
  buffer = NULL;
  (void)count;
  return (-1);
}
