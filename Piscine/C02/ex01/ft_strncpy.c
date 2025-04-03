/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:13:24 by kshin             #+#    #+#             */
/*   Updated: 2025/03/03 19:21:33 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main()
{
	char dest[30];
	char *src = "Hello, evaluator\n";
	ft_strncpy(dest, src, 0);
	printf("%s\n", dest);
	ft_strncpy(dest, src, 5);
	printf("%s\n", dest);
	ft_strncpy(dest, src, 15);
	printf("%s\n", dest);
	ft_strncpy(dest, src, 20);
	printf("%s", dest);
	return 0;
}
*/
