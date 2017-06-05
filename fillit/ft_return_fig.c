/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return_fig.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 22:36:21 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/24 14:37:58 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_return_fig(char *tetri, char letter)
{
	if (tetri[1] == letter)
		return (ft_return_fig_1(tetri, letter));
	else
		return (ft_return_fig_2(tetri, letter));
}
