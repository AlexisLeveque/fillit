/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 13:30:56 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/24 15:16:33 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_tab_len(char **grid)
{
	int		y;
	int		x;

	y = 0;
	x = 0;
	while (grid[y][x] != 0)
		x++;
	return (x);
}

void		ft_print_tab(char **grid)
{
	int		y;
	int		x;
	int		is;
	int		len;

	len = ft_tab_len(grid);
	is = 0;
	y = 0;
	while (len > 0)
	{
		x = 0;
		while (grid[y][x] != 0)
		{
			if (grid[y][x] != '#' && grid[y][x] != 0)
				is++;
			if (grid[y][x] != '#' && grid[y][x] != 0)
				ft_putchar(grid[y][x]);
			x++;
		}
		if (is != 0)
			ft_putchar('\n');
		y++;
		is = 0;
		len--;
	}
}
