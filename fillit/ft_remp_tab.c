/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remp_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 14:09:29 by aleveque          #+#    #+#             */
/*   Updated: 2016/11/23 16:54:50 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_diese(char **tab, int i)
{
	int y;
	int x;

	y = 0;
	while (y < i)
	{
		x = 0;
		while (x < i)
		{
			if (tab[y][x] != '.')
			{
				tab[y][x] = '#';
			}
			x++;
		}
		y++;
	}
	return (tab);
}

char	**ft_remp_tab(char **tab, int y)
{
	int i;
	int x;

	i = 3;
	while (i < y - 3)
	{
		x = 3;
		while (x < y - 3)
		{
			tab[i][x] = '.';
			x++;
		}
		tab[i][x + 3] = '\0';
		i++;
	}
	tab[i + 3] = 0;
	return (ft_diese(tab, i + 3));
}
