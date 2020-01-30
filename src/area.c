/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   area.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anystrom <anystrom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 16:21:27 by anystrom          #+#    #+#             */
/*   Updated: 2020/01/30 16:28:21 by anystrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/gof.h"
#include "../includes/value.h"

void	generate_area(t_block *gof)
{
	
}

void	move_time(t_block *gof)
{

}

int		key_main(int key, t_block *gof)
{
	if (key == ESC)
		exit_out(FINE);
	if (key == SPACE)
		move_time(gof);
	return (0);
}

void	area_base(t_block *gof)
{
	mlx_key_hook(gof->win, key_main, gof);
	generate_area(gof);
	mlx_loop(gof->mlx);
}