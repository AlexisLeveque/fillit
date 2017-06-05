/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fig3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 02:19:04 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/23 02:31:24 by ybensimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fig3(char **grid, char letter, int y, int x)
{
	if (grid[y][x] == '.' && grid[y][x + 1] == '.'
			&& grid[y + 1][x] == '.' && grid[y + 1][x + 1] == '.')
	{
		grid[y][x] = letter;
		grid[y][x + 1] = letter;
		grid[y + 1][x] = letter;
		grid[y + 1][x + 1] = letter;
		return (0);
	}
	return (1);
}
