/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fig1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 02:07:09 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/23 19:09:43 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fig1(char **grid, char letter, int y, int x)
{
	if (grid[y][x] == '.' && grid[y][x + 1] == '.'
			&& grid[y][x + 2] == '.' && grid[y][x + 3] == '.')
	{
		grid[y][x] = letter;
		grid[y][x + 1] = letter;
		grid[y][x + 2] = letter;
		grid[y][x + 3] = letter;
		return (0);
	}
	return (1);
}
