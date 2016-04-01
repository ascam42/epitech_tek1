/*
** my_printf.c for my_printf in /home/ungaro_l/rendu/UNIX_system/PSU_2015_my_printf
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Mon Nov  2 12:53:33 2015 Luca Ungaro
** Last update Tue Nov 10 16:19:46 2015 Luca Ungaro
*/

#include "my_printf.h"

t_interface	g_interf[] = {
  {"d", &my_printdec},
  {"i", &my_printdec},
  {"o", &my_printoct_u},
  {"u", &my_printdec_u},
  {"x", &my_printhexa_u},
  {"X", &my_printhexa_u_maj},
  {"ld", &my_printdec},
  {"b", &my_printbin},
  {"c", &my_printchar},
  {"s", &my_printstr},
  {"S", &my_printstr_hidden},
  {"p", &my_printptr},
  {"%", &my_printchar},
  {NULL, NULL}
};

int		my_fdprintf(int fd, const char *format, ...)
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
	  written += my_print_flag(fd, my_getflag(format + i), &params);
	}
      else
	{
	  my_fdputchar(fd, format[i]);
	  written += 1;
	}
      i += 1;
    }
  va_end(params);
  return (written);
}

int	my_print_flag(int fd, char *str_flag, va_list *ap)
{
  int	i;
  int	ret;

  i = 0;
  ret = 0;
  if (str_flag[0] == '%')
    my_fdputchar(fd, '%');
  else
    {
      while ((g_interf + i)->flag && ret == 0)
	{
	  if (my_strcmp((g_interf + i)->flag, str_flag) == 0)
	    {
	      ret = (g_interf + i)->print(fd, ap);
	    }
	  i += 1;
	}
      if (ret == 0)
	{
	  my_putchar('%');
	  my_putstr(str_flag);
	}
    }
  free(str_flag);
  return (ret);
}

char	*my_getflag(const char *str)
{
  int	i;
  char	*flag;

  flag = malloc(3);
  i = 0;
  if (str[0] == '%')
    {
      flag[0] == '%';
      i = 1;
    }
  else
    {
      while ((str[i] >= 97 && str[i] <= 122)
	     || (str[i] >= 65 && str[i] <= 90))
	{
	  flag[i] = str[i];
	  i += 1;
	}
    }
  flag[i] = 0;
  return (flag);
}
