/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:48:24 by kshin             #+#    #+#             */
/*   Updated: 2025/03/05 23:21:46 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_strcmp("Hello", "Hello"));
	printf("%d\n", ft_strcmp("halli", "hallo"));
	printf("%d\n", ft_strcmp("apple", "Apfel"));

	return 0;
}
*/
