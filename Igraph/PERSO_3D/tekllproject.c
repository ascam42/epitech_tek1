/*
** tekllproject.c for tek3D in /home/ungaro_l/rendu/Igraph/lightning_2020
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Thu Nov 12 10:38:33 2015 Luca Ungaro
** Last update Fri Nov 13 14:42:15 2015 Luca Ungaro
*/

#include "project.h"

/*
** PARALLEL PROJECTION
*/
void	tekllproject(t_bunny_position *out, int x, int y, int z)
{
  float	win_x;
  float	win_y;

  win_x = x - (COS_45 * y);
  win_y = (-1 * (z - (SIN_45 * y)));
  out->x = (int)((win_x / 1 < 0.5) ? win_x / 1 : win_x / 1 + 0.5);
  out->y = (int)((win_y / 1 < 0.5) ? win_y / 1 : win_y / 1 + 0.5);
}

/*
** ISOMETRICAL PROJECTION
*/
void	tekisomproject(t_bunny_position *out, int x, int y, int z)
{
  float	win_x;
  float	win_y;

  win_x = COS_30 * (x - y);
  /* win_y = (-1 * (z - 2)); */
  win_y = -2 * (y - (COS_30 * win_x));
  out->x = (int)((win_x / 1 < 0.5) ? win_x / 1 : win_x / 1 + 0.5);
  out->y = (int)((win_y / 1 < 0.5) ? win_y / 1 : win_y / 1 + 0.5);
  my_printf("SET : (%i;%i)\n", out->x, out->y);
}
