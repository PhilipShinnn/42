/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:54:53 by kshin             #+#    #+#             */
/*   Updated: 2025/02/24 17:18:33 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
	int a = 10, b = 3;
	int div, mod;
	ft_div_mod(a, b, &div, &mod);
	printf("div = %d, mod = %d\n", div, mod);
	printf("a = %d, b = %d", a, b);
	return 0;
}
*/
