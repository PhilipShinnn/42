/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 18:21:40 by kshin             #+#    #+#             */
/*   Updated: 2025/03/13 18:25:36 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!dest)
		return (NULL);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	struct s_stock_str	*arr;
	int					count;

	count = 0;
	arr = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (argc + 1));
	if (!arr)
		return (0);
	while (count < argc)
	{
		arr[count].str = argv[count];
		arr[count].size = ft_strlen(argv[count]);
		arr[count].copy = ft_strdup(argv[count]);
		count++;
	}
	arr[count].str = 0;
	arr[count].copy = 0;
	arr[count].size = 0;
	return (arr);
}
