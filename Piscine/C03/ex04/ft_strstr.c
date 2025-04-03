/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:45:18 by kshin             #+#    #+#             */
/*   Updated: 2025/03/05 23:23:05 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	check;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		check = 1;
		while (to_find[j] != '\0' && str[i + j] != '\0')
		{
			if (str[i + j] != to_find[j])
			{
				check = 0;
				break ;
			}
			j++;
		}
		if (check && to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char str[] = "Reproduce the behavior of the function strstr(man strstr)";
	char to_find[] = "man";
	char *result = ft_strstr(str, to_find);
	printf("%ld\n", result - str);
	return (0);
}
*/
