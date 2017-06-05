/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fig9.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 02:21:37 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/23 02:35:19 by ybensimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fig9(char **grid, char letter, int y, int x)
{
	if (grid[y][x] == '.' && grid[y][x + 1] == '.'
			&& grid[y + 1][x + 1] == '.' && grid[y + 2][x + 1] == '.')
	{
		grid[y][x] = letter;
		grid[y][x + 1] = letter;
		grid[y + 1][x + 1] = letter;
		grid[y + 2][x + 1] = letter;
		return (0);
	}
	return (1);
}
