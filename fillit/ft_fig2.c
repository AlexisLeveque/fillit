/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fig2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 02:17:44 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/23 02:31:13 by ybensimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fig2(char **grid, char letter, int y, int x)
{
	if (grid[y][x] == '.' && grid[y + 1][x] == '.'
			&& grid[y + 2][x] == '.' && grid[y + 3][x] == '.')
	{
		grid[y][x] = letter;
		grid[y + 1][x] = letter;
		grid[y + 2][x] = letter;
		grid[y + 3][x] = letter;
		return (0);
	}
	return (1);
}
