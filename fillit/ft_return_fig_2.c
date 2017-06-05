/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return_fig_2_5_6_8_10_11_14_15_17_19.c          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 23:31:05 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/24 14:34:26 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int			ft_find_fig_6_15_19(char *block, char letter)
{
	if (block[11] == letter)
		return (19);
	else if (block[4] == letter)
		return (15);
	return (6);
}

int					ft_return_fig_2(char *block,
		char letter)
{
	if (block[15] == letter)
		return (2);
	else if (block[7] == letter)
		return (5);
	else if (block[6] == letter)
		return (ft_find_fig_6_15_19(block, letter));
	else if (block[11] == letter)
		return (8);
	else if (block[3] == letter && block[4] == letter)
		return (10);
	else if (block[9] == letter && block[10] == letter)
		return (11);
	else if (block[10] == letter && block[4] == letter)
		return (14);
	return (17);
}
