/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 20:54:33 by kshin             #+#    #+#             */
/*   Updated: 2025/02/25 15:18:11 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
int main()
{
	int tab[] = {2, 2, 3, 4, 5, 6, 7 ,8 ,9};
	int size = sizeof(tab) / sizeof(tab[0]);
	ft_rev_int_tab(tab, size);
	for(int i = 0; i < size; i++)
	{ printf("%d", tab[i]);
	}
	return 0;
}
*/
