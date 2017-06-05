/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddtoend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:15:28 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/21 18:14:51 by ybensimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	*ft_lstaddtoend(t_bl *head, t_bl *nw)
{
	while (head->next != NULL)
		head = head->next;
	head->next = nw;
	return (head);
}
