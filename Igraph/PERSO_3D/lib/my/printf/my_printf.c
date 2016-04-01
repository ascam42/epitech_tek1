/*
** my_printf.c for my_printf in /home/ungaro_l/rendu/UNIX_system/PSU_2015_my_printf
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Nov  2 17:59:24 2015 Luca Ungaro
** Last update Mon Nov  9 17:09:30 2015 Luca Ungaro
*/

#include "my_printf.h"

int		my_printf(const char *format, ...)
{
  int		i;
  int		written;
  va_list	params;

  i = 0;
  written = 0;
  va_start(params, format);
  while(format[i])
    {
      if (format[i] == '%')
	{
	  i += 1;
	  written += my_print_flag(1, my_getflag(format + i), &params);
	}
      else
	{
	  my_putchar(format[i]);
	  written += 1;
	}
      i += 1;
    }
  va_end(params);
  return (written);
}

int	my_printfln(const char *format, ...)
{
  int		i;
  int		written;
  va_list	params;

  i = 0;
  written = 0;
  va_start(params, format);
  while(format[i])
    {
      if (format[i] == '%')
	{
	  i += 1;
	  written += my_print_flag(1, my_getflag(format + i), &params);
	}
      else
	{
	  my_putchar(format[i]);
	  written += 1;
	}
      i += 1;
    }
  va_end(params);
  my_putchar('\n');
  return (written);
}
