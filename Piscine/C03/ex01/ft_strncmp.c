/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:52:19 by kshin             #+#    #+#             */
/*   Updated: 2025/03/05 23:21:20 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_strncmp("hello", "hello", 5));
	printf("%d\n", ft_strncmp("halli", "hallo", 5));
	printf("%d\n", ft_strncmp("hello", "h", 3));
	printf("%d\n", ft_strncmp("hello", "Helli", 5));
	return 0;
}
*/
