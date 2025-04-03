/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:13:26 by kshin             #+#    #+#             */
/*   Updated: 2025/03/10 15:40:31 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (nb % i != 0 && i <= nb / 2)
		i++;
	if (i > nb / 2)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(6));
	printf("%d\n", ft_find_next_prime(10));
	printf("%d\n", ft_find_next_prime(11));
}
*/
