/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:38:46 by ybensimo          #+#    #+#             */
/*   Updated: 2016/11/24 19:31:11 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct		s_bl
{
	char			*tetri;
	char			letter;
	int				oo;
	int				fig;
	struct s_bl		*next;
}					t_bl;

void				ft_delbl(t_bl *list);
void				ft_erase(char **tab, char letter);
void				ft_putchar(char c);
void				ft_print_tab(char **grid);
void				ft_attribute_all(t_bl *head);
int					ft_fig1(char **grid, char letter, int y, int x);
int					ft_fig2(char **grid, char letter, int y, int x);
int					ft_fig3(char **grid, char letter, int y, int x);
int					ft_fig4(char **grid, char letter, int y, int x);
int					ft_fig5(char **grid, char letter, int y, int x);
int					ft_fig6(char **grid, char letter, int y, int x);
int					ft_fig7(char **grid, char letter, int y, int x);
int					ft_fig8(char **grid, char letter, int y, int x);
int					ft_fig9(char **grid, char letter, int y, int x);
int					ft_fig10(char **grid, char letter, int y, int x);
int					ft_fig11(char **grid, char letter, int y, int x);
int					ft_fig12(char **grid, char letter, int y, int x);
int					ft_fig13(char **grid, char letter, int y, int x);
int					ft_fig14(char **grid, char letter, int y, int x);
int					ft_fig15(char **grid, char letter, int y, int x);
int					ft_fig16(char **grid, char letter, int y, int x);
int					ft_fig17(char **grid, char letter, int y, int x);
int					ft_fig18(char **grid, char letter, int y, int x);
int					ft_fig19(char **grid, char letter, int y, int x);
int					ft_put_in_grid(char **grid, t_bl *block, int y, int x);
int					ft_return_fig_2(char *block, char letter);
int					ft_return_fig_1(char *block, char letter);
int					ft_return_fig(char *tetri, char letter);
void				ft_attribute_fig(t_bl *block);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_lstaddtoend(t_bl *head, t_bl *nw);
t_bl				*ft_newblocklist(char *block, char letter);
char				*ft_makeletter(char *block, char letter);
t_bl				*ft_makeblocklist(char *buf);
int					ft_check_connect(char *block);
int					ft_check_line(char *buf);
int					ft_check_block(char *block);
int					ft_check_all(char *str, int len);
int					ft_check_sharp(char *block);
int					ft_is_valid(const char *str);
int					ft_buflen(char *str);
int					ft_check_all(char *str, int len);
char				**ft_init_tab(t_bl *lst);
char				**ft_remp_tab(char **tab, int y);
char				**ft_up_tab(char **tab);
char				**ft_solve(char **tab, t_bl *first, char letter);
int					ft_check_complete(t_bl *first);
int					ft_find_grid_space(char **grid, t_bl *block, t_bl *start);
#endif
