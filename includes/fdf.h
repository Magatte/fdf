/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pba <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 02:28:12 by pba               #+#    #+#             */
/*   Updated: 2015/11/30 15:41:38 by pba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <mlx.h>
# include "libft.h"

typedef struct		s_env
{
	void			*mlx;
	void			*win;
	char			*first_map;
}					t_env;
void				parser(char *first_map, void *mlx, void *win);
int					get_lines(int fd);
char				**get_map(char *first_map, char **map);
int					expose_hook(t_env *e);
void				*draw(void *mlx, void *win);
int					key_hook(int keycode, t_env *e);

#endif
