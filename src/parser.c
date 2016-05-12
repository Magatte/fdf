/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pba <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 10:12:46 by pba               #+#    #+#             */
/*   Updated: 2015/12/01 18:08:02 by pba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			parser(char *first_map, void *mlx, void *win)
{
	int			l;
	int			c;
	char		**map;

	map = NULL;
	map = get_map(first_map, map);
	l = 0;
	while (map[l])
	{
		c = 0;
		while (map[l][c])
		{
			if (map[l][c] == '1')
			{
				mlx_pixel_put(mlx, win, c + 250, l + 250, 0xFF0000);
				mlx_pixel_put(mlx, win, c + 1 + 250, l + 250, 0xFF0000);
			}
			c++;
		}
		l++;
	}
}
