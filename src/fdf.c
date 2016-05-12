/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pba <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/22 22:36:31 by pba               #+#    #+#             */
/*   Updated: 2015/11/30 17:36:42 by pba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/*
** At the beginning I initialize my minilibx and connect it to the X server.
** With mlx_new_window() I create a new window and give it a size and a title.
** The step after is to call events managing functions.
** mlx_expose_hook is called whenever my window is displayed.
** mlx_key_hook deals with key press (keyboard and mouse).
** mlx_loop displays my window infinitely.
*/

int				main(int ac, char **av)
{
	t_env		e;

	if (ac == 2)
	{
		e.mlx = mlx_init();
		e.win = mlx_new_window(e.mlx, 600, 600, "42");
		e.first_map = NULL;
		e.first_map = av[1];
		mlx_expose_hook(e.win, expose_hook, &e);
		mlx_key_hook(e.win, key_hook, &e);
		mlx_loop(e.mlx);
	}
	else if (ac > 2)
		ft_putstr("Too much arguments.\n");
	else
		ft_putstr("Too few arguments.\n");
	return (0);
}
