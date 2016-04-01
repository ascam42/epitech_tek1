/*
** lightning.h for lightning in /home/ungaro_l/rendu/Igraph/lightning_2020
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Wed Nov 11 18:27:52 2015 Luca Ungaro
** Last update Thu Nov 12 15:19:19 2015 Luca Ungaro
*/

#ifndef LIGHTNING_H_
# define LIGHTNING_H_

/*
** tekpixel.c
*/
void		tekpixel(t_bunny_pixelarray *pix,
			 t_bunny_position pos,
			 unsigned int color);
/*
** tekline.c
*/
void		my_set_line(t_bunny_pixelarray *pix,
			    const t_bunny_position start,
			    const t_bunny_position end,
			    const unsigned int color);
void		dodge_this(t_bunny_position *coord,
			   t_bunny_position middle,
			   t_bunny_pixelarray *pix,
			   unsigned int color);
void		tekline(t_bunny_pixelarray *pix,
			const t_bunny_position *coord,
			const unsigned int color);
void		tekline_bold(t_bunny_pixelarray *pix,
			     const t_bunny_position *coord,
			     const unsigned int color);
/*
** lightning_color.c
*/
void			lightning_color(t_bunny_pixelarray *pix,
					t_bunny_position *pos,
					unsigned int color,
					size_t npos);
void			lightning(t_bunny_pixelarray *pix,
				  t_bunny_position *pos,
				  size_t npos);

#endif	/* !LIGHTNING_H_ */
