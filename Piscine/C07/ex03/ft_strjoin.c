/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:13:11 by kshin             #+#    #+#             */
/*   Updated: 2025/03/13 18:27:22 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	d;
	int	s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
		d++;
	while (src[s])
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}

int	joinlen(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + (size - 1) * ft_strlen(sep) + 1;
	return (len);
}

char	*ft_malloc(int size)
{
	char	*null;
	char	*ptr;

	null = 0;
	ptr = malloc(size * sizeof(char));
	if (!ptr)
		return (null);
	return (ptr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	char	*null;

	null = 0;
	str = ft_malloc(joinlen(size, strs, sep));
	if (size == 0)
	{
		str = ft_malloc(1);
		if (str)
			str[0] = '\0';
		return (null);
	}
	if (!str)
		return (null);
	*str = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*words1[] = {"Hello", "42", "World"};
	char	*words2[] = {"One", "Two", "Three", "Four"};
	char	*empty_words[] = {};
	char	*result;

	result = ft_strjoin(3, words1, " ");
	if (result)
	{
		printf("Test 1: %s\n", result);
		free(result);
	}
	result = ft_strjoin(4, words2, ", ");
	if (result)
	{
		printf("Test 2: %s\n", result);
		free(result);
	}
	result = ft_strjoin(0, empty_words, " ");
	if (result)
	{
		printf("Test 3: '%s'\n", result);
		free(result);
	}

	char *single[] = {"Meow"};
	result = ft_strjoin(1, single, "XYZ");
	if (result)
	{
		printf("Test 4: %s\n", result);
		free(result);
	}
	return (0);
}
*/