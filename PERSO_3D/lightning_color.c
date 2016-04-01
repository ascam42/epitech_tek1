/*
** lightning_color.c for lightning in /home/ungaro_l/rendu/Igraph/lightning_2020
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Tue Nov 10 11:10:21 2015 Luca Ungaro
** Last update Thu Nov 12 15:10:23 2015 Luca Ungaro
*/

#include <lapin.h>
#include "lightning.h"

void			lightning_color(t_bunny_pixelarray *pix,
					t_bunny_position *pos,
					unsigned int color,
					size_t npos)
{
  size_t		cur_pos;
  t_bunny_position	tab[2];

  cur_pos = 1;
  while (cur_pos < npos)
    {
      tab->x = (pos + cur_pos - 1)->x;
      tab->y = (pos + cur_pos - 1)->y;
      (tab + 1)->x = (pos + cur_pos)->x;
      (tab + 1)->y = (pos + cur_pos)->y;
      tekline(pix, tab, color);
      cur_pos += 1;
    }
}

void			lightning(t_bunny_pixelarray *pix,
				  t_bunny_position *pos,
				  size_t npos)
{
  lightning_color(pix, pos, WHITE, npos);
}
