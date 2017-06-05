/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_attribute_all.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 03:44:39 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/24 14:12:05 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_attribute_all(t_bl *head)
{
	while (head != NULL)
	{
		ft_attribute_fig(head);
		head = head->next;
	}
}
