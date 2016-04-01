/*
** my_put_nbr.c for my_put_nbr in /home/ungaro_l/rendu/Piscine_C_J03
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Wed Sep 30 10:50:13 2015 Luca Ungaro
** Last update Fri Oct  9 11:11:50 2015 Luca Ungaro
*/

int	my_putnbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb *= -1;
    }  
  if (nb > 9)
    {
      my_putnbr(nb / 10);
      my_putnbr(nb % 10);
    }
  else
    {
      my_putchar(nb + '0');
    }
  return (0);
}
