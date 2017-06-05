/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makeletter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:52:53 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/22 21:26:25 by ybensimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_makeletter(char *block, char letter)
{
	int		i;
	char	*lb;

	lb = (char *)malloc(sizeof(char) * 21);
	i = 0;
	while (block[i] != '\0' && i < 20)
	{
		if (block[i] == '#')
			lb[i] = letter;
		else
			lb[i] = block[i];
		i++;
	}
	lb[i] = '\0';
	return (lb);
}
