/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gof.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anystrom <anystrom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 15:53:05 by anystrom          #+#    #+#             */
/*   Updated: 2020/01/30 16:22:14 by anystrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GOF_H
# define GOF_H

#include <stdlib.h>
#include <mlx.h>

typedef struct		s_image
{
	void			*img;
	char			*data;
	int				sizel;
	int				bpp;
	int				endn;
}					t_image;

typedef struct	s_block
{
	void		*mlx;
	void		*win;
	int			*area;
	t_image		image;
}				t_block;

void	area_base(t_block *gof);

#endif