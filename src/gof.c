/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gof.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anystrom <anystrom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 15:45:44 by anystrom          #+#    #+#             */
/*   Updated: 2020/01/30 16:29:47 by anystrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/gof.h"
#include "../includes/value.h"

void	set_area(t_block *gof)
{
	int			x;
	int			y;

	y = 0;
	gof->image.img = mlx_new_image(gof->mlx, 4, 4);
	gof->image.data = mlx_get_data_addr(gof->image.img,
			&(gof->image.bpp), &(gof->image.sizel), &(gof->image.endn));
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			*(int *)(gof->image.data + (x * gof->image.bpp / 8) +
					(y * gof->image.sizel)) = 0xffffff;
			x++;
		}
		y++;
	}
}

void	exit_out(char *msg)
{
	ft_putendl(msg);
	exit(0);
}

int		main(void)
{
	t_block		*gof;
	int			i;

	if (!(gof = (t_block*)malloc(sizeof(t_block))))
		exit_out(MEM_ERROR);
	if (!(gof->area = (int*)malloc(sizeof(int) * WINX / 4 * WINY / 4)))
		exit_out(MEM_ERROR);
	if (!(gof->mlx = mlx_init()))
		exit_out(MLX_ERROR);
	if (!(gof->win = mlx_new_window(gof->mlx, WINX, WINY, "GOF")))
		exit_out(WIN_ERROR);
	i = 0;
	while (i < WINY * WINX)
	{
		gof->area[i] = rand() % 2;
		i++;
	}
	set_area(gof);
	area_base(gof);
	return (0);
}