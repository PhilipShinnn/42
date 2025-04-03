/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 18:47:48 by kshin             #+#    #+#             */
/*   Updated: 2025/02/22 20:13:30 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print_xy(int x, char left, char mid, char right)
{
	int	col;

	col = 0;
	if (x > 0)
		ft_putchar(left);
	while (col < x - 2)
	{
		ft_putchar(mid);
		col++;
	}
	if (x > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	row;

	row = 0;
	if (x < 1 || y < 1)
	{
		write(1, "Wrong number\n", 13);
		return ;
	}
	print_xy(x, 'o', '-', 'o');
	while (row < y - 2)
	{
		print_xy(x, '|', ' ', '|');
		row++;
	}
	if (y > 1)
		print_xy(x, 'o', '-', 'o');
}
