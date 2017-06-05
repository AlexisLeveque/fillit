/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_up_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 19:26:58 by aleveque          #+#    #+#             */
/*   Updated: 2016/11/24 15:17:13 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_up_tab(char **tab)
{
	int		i;
	int		y;
	char	**new;

	i = 0;
	y = 0;
	while (tab[i] != 0)
	{
		i++;
	}
	free(tab);
	i++;
	if (!(new = (char**)malloc(sizeof(char*) * i + 1)))
		return (NULL);
	while (y < i)
	{
		if (!(new[y] = (char*)malloc(sizeof(char) * i + 1)))
			return (NULL);
		y++;
	}
	return (ft_remp_tab(new, i));
}
