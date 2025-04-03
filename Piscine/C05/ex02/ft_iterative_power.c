/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:10:18 by kshin             #+#    #+#             */
/*   Updated: 2025/03/09 17:40:38 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_iterative_power(0,3));
        printf("%d\n", ft_iterative_power(0,0));
        printf("%d\n", ft_iterative_power(2,3));
        printf("%d\n", ft_iterative_power(3,3));
}
*/
