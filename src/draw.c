/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pba <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 02:30:59 by pba               #+#    #+#             */
/*   Updated: 2015/12/01 17:49:37 by pba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			draw_right_h()
{

}

void			draw_left_h()
{

}

void			draw_right_v()
{

}

void			draw_left_v()
{

}

void			*draw(void *mlx, void *win)
{
	int			x;
	int			y;

	y = 250;
	while (y < 350)
	{
		x = 250;
		while (x < 350)
		{
			mlx_pixel_put(mlx, win, x, y, 0xFF0000);
			x++;
		}
		y++;
	}
	return (mlx);
}
