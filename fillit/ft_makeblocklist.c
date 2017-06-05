/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makeblocklist.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:48:42 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/23 03:44:31 by ybensimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_bl	*ft_makeblocklist(char *buf)
{
	char	let;
	int		i;
	t_bl	*head;

	head = ft_newblocklist(buf, 'A');
	let = 'B';
	i = 21;
	while (buf[i])
	{
		ft_lstaddtoend(head, (ft_newblocklist((buf + i), let)));
		i += 21;
		let++;
	}
	ft_attribute_all(head);
	return (head);
}
