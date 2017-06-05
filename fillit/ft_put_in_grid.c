/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_in_grid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 01:53:03 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/24 17:15:59 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_put_in_grid_12_19(char **grid, t_bl *block, int y, int x)
{
	if (block->fig == 12)
		return (ft_fig12(grid, block->letter, y, x));
	if (block->fig == 13)
		return (ft_fig13(grid, block->letter, y, x));
	if (block->fig == 14)
		return (ft_fig14(grid, block->letter, y, x));
	if (block->fig == 15)
		return (ft_fig15(grid, block->letter, y, x));
	if (block->fig == 16)
		return (ft_fig16(grid, block->letter, y, x));
	if (block->fig == 17)
		return (ft_fig17(grid, block->letter, y, x));
	if (block->fig == 18)
		return (ft_fig18(grid, block->letter, y, x));
	if (block->fig == 19)
		return (ft_fig19(grid, block->letter, y, x));
	return (0);
}

int			ft_put_in_grid(char **grid, t_bl *block, int y, int x)
{
	if (block->fig == 1)
		return (ft_fig1(grid, block->letter, y, x));
	if (block->fig == 2)
		return (ft_fig2(grid, block->letter, y, x));
	if (block->fig == 3)
		return (ft_fig3(grid, block->letter, y, x));
	if (block->fig == 4)
		return (ft_fig4(grid, block->letter, y, x));
	if (block->fig == 5)
		return (ft_fig5(grid, block->letter, y, x));
	if (block->fig == 6)
		return (ft_fig6(grid, block->letter, y, x));
	if (block->fig == 7)
		return (ft_fig7(grid, block->letter, y, x));
	if (block->fig == 8)
		return (ft_fig8(grid, block->letter, y, x));
	if (block->fig == 9)
		return (ft_fig9(grid, block->letter, y, x));
	if (block->fig == 10)
		return (ft_fig10(grid, block->letter, y, x));
	if (block->fig == 11)
		return (ft_fig11(grid, block->letter, y, x));
	if (block->fig >= 12)
		return (ft_put_in_grid_12_19(grid, block, y, x));
	return (0);
}
