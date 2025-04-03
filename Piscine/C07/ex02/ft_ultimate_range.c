/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:12:34 by kshin             #+#    #+#             */
/*   Updated: 2025/03/13 15:50:44 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * size);
	if (arr == NULL)
		return (-1);
	i = 0;
	while (min < max)
		arr[i++] = min++;
	*range = arr;
	return (size);
}
/*
#include <stdio.h>
int main(void)
{
    int *range;
    int i;
    int min;
    int max;

    min = 1;
    max = 5;
    printf("%d\n", ft_ultimate_range(&range, min, max));
    i = 0;
    while (i < max - min)
        printf("%d ", range[i++]);
    printf("\n");
    return (0);
}
*/
