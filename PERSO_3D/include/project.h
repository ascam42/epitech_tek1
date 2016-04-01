/*
** project.h for 3D in /home/ungaro_l/rendu/Igraph/PERSO_3D
** 
** Made by Luca Ungaro
** Login   <ungaro_l@epitech.net>
** 
** Started on  Thu Nov 12 14:46:05 2015 Luca Ungaro
** Last update Fri Nov 13 14:31:41 2015 Luca Ungaro
*/

#ifndef PROJECT_H_
# define PROJECT_H_
# include <lapin.h>
# include "lightning.h"
# define COS_30	0.86602540378
# define SIN_30	0.5
# define TAN_30 0.57735026919
# define COS_45	0.52532198881
# define SIN_45	0.85090352435

void	tekllproject(t_bunny_position *out, int x, int y, int z);
void	tekisomproject(t_bunny_position *out, int x, int y, int z);

#endif	/* !PROJECT_H_ */
