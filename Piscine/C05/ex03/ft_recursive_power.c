/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:11:02 by kshin             #+#    #+#             */
/*   Updated: 2025/03/09 17:49:58 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	cal_power(int *answer, int nb, int power)
{
	if (power > 0)
	{
		*answer *= nb;
		power--;
		cal_power(answer, nb, power);
	}
}

int	ft_recursive_power(int nb, int power)
{
	int	answer;

	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	answer = 1;
	cal_power(&answer, nb, power);
	return (answer);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_recursive_power(0, 2));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(2, 3));
	printf("%d\n", ft_recursive_power(3, 3));
}
*/
