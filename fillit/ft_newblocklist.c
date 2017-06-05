/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newblocklist.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:42:39 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/22 21:23:43 by ybensimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_bl	*ft_newblocklist(char *block, char letter)
{
	t_bl	*fresh;

	fresh = (t_bl *)malloc(sizeof(t_bl));
	if (fresh == NULL)
		return (NULL);
	fresh->tetri = (char *)malloc(sizeof(char) * 21);
	ft_memcpy((fresh->tetri), (ft_makeletter(block, letter)), 21);
	fresh->oo = 0;
	fresh->letter = letter;
	fresh->next = NULL;
	return (fresh);
}
