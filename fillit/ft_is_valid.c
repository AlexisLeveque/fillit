/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:48:41 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/21 19:21:15 by ybensimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_is_valid(const char *str)
{
	char	buf[547];
	int		fd;
	int		len;

	if ((fd = open(str, O_RDONLY)) == -1)
		return (1);
	len = read(fd, buf, 547);
	if ((len + 1) % 21 != 0 || len > 545)
		return (1);
	buf[len + 1] = '\0';
	if (ft_check_all(buf, len) != 0)
		return (1);
	return (0);
}
