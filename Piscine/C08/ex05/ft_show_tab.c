/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 23:53:50 by kshin             #+#    #+#             */
/*   Updated: 2025/03/13 18:28:53 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb > 9)
			ft_putnbr(nb / 10);
		c = nb % 10 + '0';
		write (1, &c, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	ft_putstr(par->str);
	write(1, "\n", 1);
	ft_putnbr(par->size);
	write(1, "\n", 1);
	ft_putstr(par->copy);
	write(1, "\n", 1);
}
