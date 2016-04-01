/*
** tekpixel.c for lightning in /home/ungaro_l/rendu/Igraph/lightning_2020
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Tue Nov 10 10:24:42 2015 Luca Ungaro
** Last update Thu Nov 12 15:22:56 2015 Luca Ungaro
*/

#include <lapin.h>
#include "lightning.h"

void		tekpixel(t_bunny_pixelarray *pix,
			 t_bunny_position pos,
			 unsigned int color)
{
  unsigned int	pixel_nb;
  t_color	clr_pix;

  pixel_nb = (pos.y * pix->clipable.clip_width) + pos.x;
  clr_pix.full = color;
  ((unsigned int *)(pix)->pixels)[pixel_nb] = clr_pix.full;
}
