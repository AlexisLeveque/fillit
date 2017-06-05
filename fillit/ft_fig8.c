/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fig8.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 02:21:26 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/23 02:34:08 by ybensimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fig8(char **grid, char letter, int y, int x)
{
	if (grid[y][x] == '.' && grid[y + 1][x] == '.'
			&& grid[y + 2][x] == '.' && grid[y + 2][x + 1] == '.')
	{
		grid[y][x] = letter;
		grid[y + 1][x] = letter;
		grid[y + 2][x] = letter;
		grid[y + 2][x + 1] = letter;
		return (0);
	}
	return (1);
}
