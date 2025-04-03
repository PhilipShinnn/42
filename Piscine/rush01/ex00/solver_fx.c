/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchow <yuchow@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:08:34 by yuchow            #+#    #+#             */
/*   Updated: 2025/03/02 13:09:01 by yuchow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

bool	checker_fx(int grid[4][4], int clues[4][4]);
bool	is_unique(int grid[4][4], int row, int col, int height);

bool	solver_fx(int grid[4][4], int clues[4][4],
		int current_row, int current_col)
{
	int	height;

	if (current_row == 4)
		return (checker_fx(grid, clues));
	if (current_col == 4)
		return (solver_fx(grid, clues, current_row + 1, 0));
	height = 1;
	while (height <= 4)
	{
		if (is_unique(grid, current_row, current_col, height) == true)
		{
			grid[current_row][current_col] = height;
			if (solver_fx(grid, clues, current_row, current_col + 1) == true)
				return (true);
			grid[current_row][current_col] = 0;
		}
		height++;
	}
	return (false);
}
