/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fig12.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 02:22:32 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/23 03:29:07 by ybensimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fig12(char **grid, char letter, int y, int x)
{
	if (grid[y][x] == '.' && grid[y][x + 1] == '.'
			&& grid[y][x + 2] == '.' && grid[y + 1][x + 2] == '.')
	{
		grid[y][x] = letter;
		grid[y][x + 1] = letter;
		grid[y][x + 2] = letter;
		grid[y + 1][x + 2] = letter;
		return (0);
	}
	return (1);
}
