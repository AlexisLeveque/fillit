/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_connect.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 19:20:07 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/22 19:20:23 by ybensimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_connect(char *block)
{
	int		i;
	int		connect;

	i = 0;
	connect = 0;
	while (i < 20)
	{
		if (block[i] == '#')
		{
			if (block[i + 1] == '#')
				connect++;
			if (i < 15 && block[i + 5] == '#')
				connect++;
			if (i > 4 && block[i - 5] == '#')
				connect++;
			if (i > 0 && block[i - 1] == '#')
				connect++;
		}
		i++;
	}
	if (connect == 6 || connect == 8)
		return (0);
	return (1);
}
