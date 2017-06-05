/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_complete.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 17:42:35 by aleveque          #+#    #+#             */
/*   Updated: 2016/11/23 16:27:22 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_complete(t_bl *first)
{
	while (first->next != NULL)
	{
		if (first->oo != 1)
			return (0);
		first = first->next;
	}
	if (first->oo != 1)
		return (0);
	return (1);
}
