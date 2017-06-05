/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:36:36 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/21 19:13:29 by ybensimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_check_all(char *str, int len)
{
	int	i;

	i = 0;
	while (i <= len - 20)
	{
		if (ft_check_block(str + i) != 0)
			return (1);
		i += 21;
	}
	return (0);
}
