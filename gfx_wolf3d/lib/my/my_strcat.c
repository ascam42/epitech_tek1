/*
** my_strcat.c for my_strcat in /home/ungaro_l/rendu/Piscine_C_J07
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Tue Oct  6 09:10:41 2015 Luca Ungaro
** Last update Fri Oct 23 18:22:17 2015 Luca Ungaro
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dest[j] != '\0')
    j += 1;
  while (src[i])
    {
      dest[j] = src[i];
      i += 1;
      j += 1;
    }
  dest[j] = '\0';
  return (dest);
}
