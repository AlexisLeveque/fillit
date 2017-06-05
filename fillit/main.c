/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:39:17 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/25 16:17:54 by ybensimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_bl	*ft_analyse(const char *str, int len)
{
	char	*res;
	int		fd;

	res = (char *)malloc(sizeof(char) * (len + 1));
	res[len + 1] = '\0';
	fd = open(str, O_RDONLY);
	read(fd, res, len);
	close(fd);
	return (ft_makeblocklist(res));
}

int		main(int argc, char **argv)
{
	t_bl	*result;
	char	**tab;

	if (argc != 2)
	{
		write(1, "Usage: ./fillit yourfile\n", 25);
	}
	else
	{
		if (ft_is_valid(argv[1]) == 0)
		{
			result = ft_analyse(argv[1], (ft_buflen(argv[1])));
			tab = ft_init_tab(result);
			while (ft_check_complete(result) != 1)
			{
				tab = ft_up_tab(tab);
				tab = ft_solve(tab, result, 'A');
			}
			ft_print_tab(tab);
			free(tab);
			ft_delbl(result);
		}
		else
			write(1, "error\n", 6);
	}
}
