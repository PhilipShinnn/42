/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_unique.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchow <yuchow@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:25:15 by yuchow            #+#    #+#             */
/*   Updated: 2025/03/02 15:48:28 by yuchow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	is_unique(int grid[4][4], int row, int col, int height)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == height || grid[i][col] == height)
		{
			return (false);
		}
		i++;
	}
	return (true); 
}
