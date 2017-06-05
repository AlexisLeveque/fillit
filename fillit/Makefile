# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybensimo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/25 16:14:25 by ybensimo          #+#    #+#              #
#    Updated: 2016/11/25 16:14:29 by ybensimo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRC = main.c ft_check_block.c ft_check_connect.c ft_check_sharp.c ft_buflen.c ft_is_valid.c ft_check_all.c ft_check_line.c ft_makeblocklist.c ft_makeletter.c ft_newblocklist.c ft_lstaddtoend.c ft_memcpy.c ft_return_fig.c ft_return_fig_1.c ft_return_fig_2.c ft_put_in_grid.c ft_fig1.c ft_fig2.c ft_fig3.c ft_fig4.c ft_fig5.c ft_fig6.c ft_fig7.c ft_fig8.c ft_fig9.c ft_fig10.c ft_fig11.c ft_fig12.c ft_fig13.c ft_fig14.c ft_fig15.c ft_fig16.c ft_fig17.c ft_fig18.c ft_fig19.c ft_attribute_fig.c ft_attribute_all.c ft_init_tab.c ft_remp_tab.c ft_up_tab.c ft_solve.c ft_check_complete.c ft_find_grid_space.c ft_print_tab.c ft_putchar.c ft_delbl.c
CC = gcc
FLAG = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)
.PHONY : all clean fclean re NAME

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAG) -c $(SRC)
	$(CC) $(FLAG) -o $(NAME) $(OBJ)

clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
