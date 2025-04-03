/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 21:01:00 by kshin             #+#    #+#             */
/*   Updated: 2025/02/25 18:50:00 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int main()
{
	int arr[] = { 9, 2, 6, 1, 8, 4};
	int size = sizeof(arr) / sizeof(arr[0]);
	ft_sort_int_tab(arr, size);
	for(int i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;	
}
*/
