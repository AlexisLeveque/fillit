/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_attribute_fig.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 23:54:04 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/24 14:12:43 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_attribute_fig(t_bl *block)
{
	int		i;

	i = 0;
	while (block->tetri[i] != block->letter)
		i++;
	block->fig = (ft_return_fig(block->tetri + i, block->letter));
}
