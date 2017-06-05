/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 18:38:13 by aleveque          #+#    #+#             */
/*   Updated: 2016/11/24 15:15:42 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_init_tab(t_bl *lst)
{
	int		i;
	int		y;
	char	**tab;

	i = 1;
	y = 0;
	while (lst->next != NULL)
	{
		i++;
		lst = lst->next;
	}
	while (y * y < i * 4)
		y++;
	y--;
	if (!(tab = (char**)malloc(sizeof(char*) * (y + 7))))
		return (NULL);
	i = 0;
	while (i < y + 6)
	{
		if (!(tab[i] = (char*)malloc(sizeof(char) * (y + 7))))
			return (NULL);
		i++;
	}
	return (ft_remp_tab(tab, y + 6));
}
