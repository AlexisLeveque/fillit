/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return_fig_1_3_4_7_9_12_13_16_18.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 22:45:18 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/24 14:09:36 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_find_fig_1_4_12_13(char *block, char letter)
{
	if (block[3] == letter)
		return (1);
	else if (block[5] == letter)
		return (4);
	else if (block[7] == letter)
		return (12);
	return (13);
}

static int		ft_find_fig_3_7_18(char *block, char letter)
{
	if (block[6] == letter)
		return (3);
	else if (block[10] == letter)
		return (7);
	return (18);
}

int				ft_return_fig_1(char *block, char letter)
{
	if (block[2] == letter)
		return (ft_find_fig_1_4_12_13(block, letter));
	else if (block[5] == letter)
		return (ft_find_fig_3_7_18(block, letter));
	else if (block[6] == letter && block[11] == letter)
		return (9);
	return (16);
}
