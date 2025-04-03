/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:53:21 by kshin             #+#    #+#             */
/*   Updated: 2025/02/26 16:57:25 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	printf("%d\n", ft_str_is_uppercase("asdl"));
	printf("%d\n", ft_str_is_uppercase("ASDL"));
	printf("%d\n", ft_str_is_uppercase("AS21"));
	printf("%d\n", ft_str_is_uppercase(""));
}
*/
