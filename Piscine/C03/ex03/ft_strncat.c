/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:31:16 by kshin             #+#    #+#             */
/*   Updated: 2025/03/05 23:22:35 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char dest[100] = "Hello, ";
	char *src = "Evaluator!";
	printf("%s\n",ft_strncat(dest, src, 3));
	return 0;
}
*/
