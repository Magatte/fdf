/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expose_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pba <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 02:55:28 by pba               #+#    #+#             */
/*   Updated: 2015/11/27 10:46:07 by pba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			expose_hook(t_env *e)
{
	parser(e->first_map, e->mlx, e->win);
	return (0);
}
