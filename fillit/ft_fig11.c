/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fig11.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 02:21:58 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/24 14:27:17 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fig11(char **grid, char letter, int y, int x)
{
	if (grid[y][x] == '.' && grid[y + 1][x] == '.'
			&& grid[y + 2][x] == '.' && grid[y + 2][x - 1] == '.')
	{
		grid[y][x] = letter;
		grid[y + 1][x] = letter;
		grid[y + 2][x] = letter;
		grid[y + 2][x - 1] = letter;
		return (0);
	}
	return (1);
}
