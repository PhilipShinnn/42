/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchow <yuchow@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 12:45:30 by yuchow            #+#    #+#             */
/*   Updated: 2025/03/02 22:50:28 by yuchow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	validate_input(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < '1' || str[i] > '4') && str[i] != ' ')
			return (0);
		i++;
	}
	return (i == 31);
}

void	fill_clues(char *str, int clues[4][4])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			clues[j][k] = str[i] - '0';
			k++;
			if (k == 4)
			{
				k = 0;
				j++;
			}
		}
		i++;
	}
}

int	input(int argc, char *argv[], int clues[4][4])
{
	if (argc != 2 || !validate_input(argv[1]))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	fill_clues(argv[1], clues);
	return (0);
}
