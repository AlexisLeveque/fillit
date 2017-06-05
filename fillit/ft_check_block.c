/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_block.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:36:21 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/21 16:36:23 by ybensimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_check_block(char *block)
{
	int	i;

	i = 0;
	if (block[19] != '\n')
		return (1);
	else
	{
		while (i <= 15)
		{
			if (ft_check_line(block + i) != 0)
				return (1);
			i += 5;
		}
	}
	if ((ft_check_sharp(block) != 0) || (ft_check_connect(block) != 0))
		return (1);
	return (0);
}
