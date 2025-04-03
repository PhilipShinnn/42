/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:29:27 by kshin             #+#    #+#             */
/*   Updated: 2025/02/26 16:41:16 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
	printf("%d", ft_str_is_numeric("a134liushdg"));
	printf("%d", ft_str_is_numeric("aiwbg"));
	printf("%d", ft_str_is_numeric("1835.6"));
	printf("%d", ft_str_is_numeric("123"));
	printf("%d", ft_str_is_numeric(""));
	return 0;
}
*/
