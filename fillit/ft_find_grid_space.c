/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_grid_space.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 12:07:50 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/24 18:13:15 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int			ft_appel(char **grid, t_bl *block, t_bl *start)
{
	block->oo = 1;
	grid = ft_solve(grid, start, block->letter + 1);
	if (ft_check_complete(start) == 1)
		return (0);
	ft_erase(grid, block->letter);
	block->oo = 0;
	return (1);
}

int			ft_find_grid_space(char **grid, t_bl *block, t_bl *start)
{
	int		y;
	int		x;

	y = 0;
	if (block->oo == 1)
		return (1);
	while (grid[y] != 0)
	{
		x = 0;
		while (grid[y][x] != 0)
		{
			if (grid[y][x] == '.')
			{
				if ((ft_put_in_grid(grid, block, y, x) == 0))
				{
					if (ft_appel(grid, block, start) == 0)
						return (0);
				}
			}
			x++;
		}
		y++;
	}
	return (1);
}
