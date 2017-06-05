/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fig7.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 02:21:15 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/23 02:33:27 by ybensimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fig7(char **grid, char letter, int y, int x)
{
	if (grid[y][x] == '.' && grid[y][x + 1] == '.'
			&& grid[y + 1][x] == '.' && grid[y + 2][x] == '.')
	{
		grid[y][x] = letter;
		grid[y][x + 1] = letter;
		grid[y + 1][x] = letter;
		grid[y + 2][x] = letter;
		return (0);
	}
	return (1);
}
