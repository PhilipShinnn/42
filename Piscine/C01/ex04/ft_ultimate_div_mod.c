/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:58:02 by kshin             #+#    #+#             */
/*   Updated: 2025/02/25 15:15:46 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;
	int	r;

	d = *a / *b;
	r = *a % *b;
	*a = d;
	*b = r;
}
/*
int main()
{
	int a = 10;
	int b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}
*/
