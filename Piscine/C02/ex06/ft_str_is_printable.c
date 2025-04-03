/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:58:34 by kshin             #+#    #+#             */
/*   Updated: 2025/02/26 18:24:21 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	printf("%d", ft_str_is_printable("sadjlfk"));
	printf("%d", ft_str_is_printable(" "));
	printf("%d", ft_str_is_printable("!#$^@%&#"));
	printf("%d", ft_str_is_printable("Hello\nWorld"));
	return 0;
}
*/
