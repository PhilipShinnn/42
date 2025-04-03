/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:11:55 by kshin             #+#    #+#             */
/*   Updated: 2025/03/13 15:50:57 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (0);
	range = (int *)malloc(sizeof(int) * (max - min));
	if (range == 0)
		return (0);
	i = 0;
	while (min < max)
		range[i++] = min++;
	return (range);
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
	range = ft_range(min, max);
	i = 0;
	while (i < max - min)
		printf("%d ", range[i++]);
	printf("\n");
	return (0);
}
*/