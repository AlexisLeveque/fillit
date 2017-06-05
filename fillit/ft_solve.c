/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:44:12 by aleveque          #+#    #+#             */
/*   Updated: 2016/11/24 16:17:16 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_erase(char **tab, char letter)
{
	int x;
	int y;

	y = 0;
	while (tab[y] != 0)
	{
		x = 0;
		while (tab[y][x] != 0)
		{
			if (tab[y][x] == letter)
				tab[y][x] = '.';
			x++;
		}
		y++;
	}
}

char		**ft_solve(char **tab, t_bl *first, char letter)
{
	t_bl *lst;

	lst = first;
	if (ft_check_complete(first) == 1)
		return (tab);
	while (lst->letter != letter && lst->next != NULL)
		lst = lst->next;
	if (lst->next == NULL && lst->letter != letter)
		return (tab);
	if (ft_find_grid_space(tab, lst, first) == 0)
	{
		tab = ft_solve(tab, first, 'A');
		tab = ft_solve(tab, first, letter + 1);
		if (ft_check_complete(first) == 1)
			return (tab);
		ft_erase(tab, lst->letter);
		lst->oo = 0;
	}
	tab = ft_solve(tab, first, letter + 1);
	return (tab);
}
