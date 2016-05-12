/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pba <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:51:56 by pba               #+#    #+#             */
/*   Updated: 2015/11/30 18:37:50 by pba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				get_lines(int fd)
{
	int			ret;
	int			lines;
	char		buf[1];

	lines = 0;
	while((ret = read(fd, buf, READ_MAX)))
	{
		if (*buf == '\n')
			lines++;
	}
	close(fd);
	return (lines);
}

int				custom_strlen(char *first_map)
{
	int			i;

	i = 0;
	while (first_map[i])
	{
		if (first_map[i] == '\n')
			break ;
		i++;
	}
	return (i);
}

int				open_file(char *first_map)
{
	int			fd;

	if ((fd = open(first_map, O_RDONLY)) == -1)
	{
		ft_putstr("Attempt to open ");
		ft_putstr(first_map);
		ft_putstr(" failed\n");
	}
	return (fd);
}

char			**get_map(char *first_map, char **map)
{
	int			i;
	int			fd;
	int			lines;
	char		*line;

	if ((fd = open_file(first_map)) == -1)
		return (map);
	lines = get_lines(fd);
	if ((fd = open_file(first_map)) == -1)
		return (map);
	line = NULL;
	if ((map = (char **)malloc(sizeof(char *) * lines + 1)))
	{
		map[lines] = NULL;
		i = 0;
		while (get_next_line(fd, &line) > 0)
			map[i++] = line;
		close(fd);
	}
	return (map);
}
