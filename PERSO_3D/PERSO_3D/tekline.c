/*
** lightning.c for lightning in /home/ungaro_l/rendu/Igraph/lightning_2020
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Tue Nov 10 10:14:37 2015 Luca Ungaro
** Last update Thu Nov 12 15:20:02 2015 Luca Ungaro
*/

#include <lapin.h>
#include "lightning.h"

void			my_set_line(t_bunny_pixelarray *pix,
				    const t_bunny_position start,
				    const t_bunny_position end,
				    const unsigned int color)
{
  t_bunny_position	middle;
  t_bunny_position	coord[2];

  middle.x = (start.x + end.x) / 2;
  middle.y = (start.y + end.y) / 2;
  if ((end.x != start.x) &&
      (end.y != start.y) &&
      (end.x != start.x + 1) &&
      (end.y != start.y + 1) &&
      (end.x + 1 != start.x) &&
      (end.y + 1 != start.y))
    {
      my_set_line(pix, start, middle, color);
      my_set_line(pix, middle, end, color);
      tekpixel(pix, start, color);
      tekpixel(pix, end, color);
    }
  *coord = start;
  *(coord + 1) = end;
  dodge_this(coord, middle, pix, color);
  tekpixel(pix, middle, color);
}

/*
** Better change its name ?
*/
void	dodge_this(t_bunny_position *coord,
		   t_bunny_position middle,
		   t_bunny_pixelarray *pix,
		   unsigned int color)
{
  t_bunny_position	tmp[2];

  if (middle.x == coord->x || middle.x == (coord + 1)->x)
    {
      tmp->x = coord->x;
      tmp->y = coord->y;
      (tmp + 1)->x = (middle.x == coord->x) ? middle.x : middle.x + 1;
      (tmp + 1)->y = (middle.y == coord->y) ? middle.y : middle.y + 1;
      tekline(pix, tmp, color);
      tmp->x = (middle.x == (coord + 1)->x) ? middle.x : middle.x + 1;
      tmp->y = (middle.y == (coord + 1)->y) ? middle.y : middle.y + 1;
      (tmp + 1)->x = (coord + 1)->x;
      (tmp + 1)->y = (coord + 1)->y;
      tekline(pix, tmp, color);
    }
}

void			tekline(t_bunny_pixelarray *pix,
				const t_bunny_position *coord,
				const unsigned int color)
{
  int			max;
  t_bunny_position	count;

  if (coord->x != (coord + 1)->x && coord->y != (coord + 1)->y)
    my_set_line(pix, *coord, *(coord + 1), color);
  else if (coord->x == (coord + 1)->x)
    {
      count.x = coord->x;
      count.y = ((coord->y < (coord + 1)->y) ? coord->y : (coord + 1)->y) - 1;
      max = (coord->y < (coord + 1)->y) ? (coord + 1)->y : coord->y;
      while (++count.y < max)
	  tekpixel(pix, count, color);
    }
  else if (coord->y == (coord + 1)->y)
    {
      count.y = coord->y;
      count.x = ((coord->x < (coord + 1)->x) ? coord->x : (coord + 1)->x) - 1;
      max = (coord->x < (coord + 1)->x) ? (coord + 1)->x : coord->x;
      while (++count.x < max)
	tekpixel(pix, count, color);
    }
  tekpixel(pix, *coord, color);
  tekpixel(pix, *(coord + 1), color);
}

void	tekline_bold(t_bunny_pixelarray *pix,
		     const t_bunny_position *coord,
		     const unsigned int color)
{
  t_bunny_position	new[2];

  tekline(pix, coord, color);
  new->x = (coord->x == 0) ? coord->x : coord->x - 1;
  new->y = (coord->y == 0) ? coord->y : coord->y - 1;
  (new + 1)->x = ((coord + 1)->x == 0) ? (coord + 1)->x : (coord + 1)->x - 1;
  (new + 1)->y = ((coord + 1)->y == 0) ? (coord + 1)->y : (coord + 1)->y - 1;
  tekline(pix, new, color);
  new->x = (coord->x == 0) ? coord->x : coord->x + 1;
  new->y = (coord->y == 0) ? coord->y : coord->y + 1;
  (new + 1)->x = ((coord + 1)->x == pix->clipable.clip_height) ?
    (coord + 1)->x : (coord + 1)->x + 1;
  (new + 1)->y = ((coord + 1)->y == pix->clipable.clip_width) ?
    (coord + 1)->y : (coord + 1)->y + 1;
  tekline(pix, new, color);
}
