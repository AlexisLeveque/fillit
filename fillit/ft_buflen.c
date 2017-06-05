/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buflen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:36:29 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/24 15:14:02 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_buflen(char *str)
{
	char	buf[547];
	int		fd;
	int		len;

	fd = open(str, O_RDONLY);
	len = read(fd, buf, 546);
	close(fd);
	return (len);
}
