/*
** main.c for zEUODJNS in /home/ungaro_l/perso/liblapin/pixel
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Tue Nov 10 10:55:25 2015 Luca Ungaro
** Last update Mon Nov 16 17:03:58 2015 Luca Ungaro
*/

#include <lapin.h>
#include "lightning.h"
#include "project.h"
#define WIN_WIDTH	1600
#define WIN_HEIGHT	1200

int			main(int ac, char **av)
{
  t_bunny_window	*win;
  t_bunny_pixelarray	*img;
  t_bunny_position	pos;
  t_bunny_position	pos_tab[8];
  t_bunny_position	pos_tab_line[2];
  int			x[8];
  int			y[8];
  int			z[8];
  int			i;

  i = 0;
  /*
  ** Window starting
  */
  win = bunny_start(WIN_WIDTH, WIN_HEIGHT, 0, "__AMAZING_3D__");
  /*
  ** Img initializing
  */
  img = bunny_new_pixelarray(WIN_WIDTH, WIN_HEIGHT);
  img->clipable.clip_x_position = 0;
  img->clipable.clip_y_position = 0;
  img->clipable.clip_height = WIN_HEIGHT;
  img->clipable.clip_width = WIN_WIDTH;
  pos.y = 0;
  while (pos.y < WIN_HEIGHT)
    {
      pos.x = 0;
      while (pos.x < WIN_WIDTH)
  	{
  	  tekpixel(img, pos, BLACK);
  	  pos.x += 1;
  	}
      pos.y += 1;
    }
  /*
  ** INITIALISATIONS
  */
  /* A */
  x[0] = 300;
  y[0] = 0;
  z[0] = -300;
  /* B */
  x[1] = 900;
  y[1] = 0;
  z[1] = -300;
  /* C */
  x[2] = 900;
  y[2] = 0;
  z[2] = -800;
  /* D */
  x[3] = 300;
  y[3] = 0;
  z[3] = -800;
  /* E */
  x[4] = 300;
  y[4] = 200;
  z[4] = -300;
  /* F */
  x[5] = 900;
  y[5] = 200;
  z[5] = -300;
  /* G */
  x[6] = 900;
  y[6] = 200;
  z[6] = -800;
  /* H */
  x[7] = 300;
  y[7] = 200;
  z[7] = -800;
  /*
  ** CONVERSION -> PARALLEL
  */
  tekllproject(pos_tab + 0, x[0], y[0], z[0]);
  tekllproject(pos_tab + 1, x[1], y[1], z[1]);
  tekllproject(pos_tab + 2, x[2], y[2], z[2]);
  tekllproject(pos_tab + 3, x[3], y[3], z[3]);
  tekllproject(pos_tab + 4, x[4], y[4], z[4]);
  tekllproject(pos_tab + 5, x[5], y[5], z[5]);
  tekllproject(pos_tab + 6, x[6], y[6], z[6]);
  tekllproject(pos_tab + 7, x[7], y[7], z[7]);
  /*
  ** LINES !!!!
  */
  pos_tab_line[0] = pos_tab[0];
  pos_tab_line[1] = pos_tab[1];
  tekline(img, pos_tab_line, WHITE);
  pos_tab_line[0] = pos_tab[1];
  pos_tab_line[1] = pos_tab[2];
  tekline(img, pos_tab_line, WHITE);
  pos_tab_line[0] = pos_tab[2];
  pos_tab_line[1] = pos_tab[3];
  tekline(img, pos_tab_line, WHITE);
  pos_tab_line[0] = pos_tab[3];
  pos_tab_line[1] = pos_tab[0];
  tekline(img, pos_tab_line, WHITE);
  pos_tab_line[0] = pos_tab[4];
  pos_tab_line[1] = pos_tab[5];
  tekline(img, pos_tab_line, WHITE);
  pos_tab_line[0] = pos_tab[5];
  pos_tab_line[1] = pos_tab[6];
  tekline(img, pos_tab_line, WHITE);
  pos_tab_line[0] = pos_tab[6];
  pos_tab_line[1] = pos_tab[7];
  tekline(img, pos_tab_line, WHITE);
  pos_tab_line[0] = pos_tab[7];
  pos_tab_line[1] = pos_tab[4];
  tekline(img, pos_tab_line, WHITE);
  pos_tab_line[0] = pos_tab[0];
  pos_tab_line[1] = pos_tab[4];
  tekline(img, pos_tab_line, WHITE);
  pos_tab_line[0] = pos_tab[1];
  pos_tab_line[1] = pos_tab[5];
  tekline(img, pos_tab_line, WHITE);
  pos_tab_line[0] = pos_tab[2];
  pos_tab_line[1] = pos_tab[6];
  tekline(img, pos_tab_line, WHITE);
  pos_tab_line[0] = pos_tab[3];
  pos_tab_line[1] = pos_tab[7];
  tekline(img, pos_tab_line, WHITE);
  /*
  ** Drawing img on win->buffer
  */
  pos.x = 0;
  pos.y = 0;
  bunny_blit(&win->buffer, &img->clipable, &pos);
  /*
  ** Finally showing our hard work
  */
  bunny_display(win);
  bunny_loop(win, 42, NULL);
  bunny_delete_clipable(&(img->clipable));
  bunny_stop(win);
  return (0);
}
