/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delbl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 19:07:43 by aleveque          #+#    #+#             */
/*   Updated: 2016/11/24 19:27:41 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_delbl(t_bl *list)
{
	t_bl	*current;
	t_bl	*next;

	current = list;
	while (current)
	{
		next = current->next;
		free(current->tetri);
		current->tetri = NULL;
		free(current);
		current = NULL;
		current = next;
	}
}
