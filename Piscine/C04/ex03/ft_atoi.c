/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:14:15 by kshin             #+#    #+#             */
/*   Updated: 2025/03/06 20:29:51 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int main()
{
	char str1[] = "  ---+--+1234ab567";	//-1234
	printf("%d\n", ft_atoi(str1));
	char str2[] = " --++349572";		//349572
	printf("%d\n", ft_atoi(str2));
	char str3[] = "+---8394";		//-8394
	printf("%d\n", ft_atoi(str3));
	return 0;
}
*/
