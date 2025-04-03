/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:12:10 by kshin             #+#    #+#             */
/*   Updated: 2025/03/09 18:10:07 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_sqrt(0));
        printf("%d\n", ft_sqrt(1));
        printf("%d\n", ft_sqrt(2));
        printf("%d\n", ft_sqrt(3));
        printf("%d\n", ft_sqrt(4));
        printf("%d\n", ft_sqrt(9));
        printf("%d\n", ft_sqrt(16));
        printf("%d\n", ft_sqrt(25));
}
*/
