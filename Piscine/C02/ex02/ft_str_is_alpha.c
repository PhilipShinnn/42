/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:49:18 by kshin             #+#    #+#             */
/*   Updated: 2025/02/26 13:18:06 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main()
{
	printf("%d\n", ft_str_is_alpha("augbe13g"));
	printf("%d\n", ft_str_is_alpha(""));
	printf("%d\n", ft_str_is_alpha("abcdef"));
	printf("%d\n", ft_str_is_alpha("abcd!"));

	return 0;
}
*/
