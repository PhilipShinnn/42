/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_fx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 21:45:23 by fgreiff           #+#    #+#             */
/*   Updated: 2025/03/29 18:11:12 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include "visibility_info.h"

enum e_Direction {
	TOP,
	BOTTOM,
	LEFT,
	RIGHT
};

void	update_visibility(t_VisibilityInfo *visibility, int height)
{
	if (height > visibility->max_height)
	{
		visibility->visible++;
		visibility->max_height = height;
	}
}

bool	check_column(int grid[4][4], int clues[4][4], int col)
{
	int					row;
	t_VisibilityInfo	top;
	t_VisibilityInfo	bottom;

	top.visible = 0;
	top.max_height = 0;
	bottom.visible = 0;
	bottom.max_height = 0;
	row = 0;
	while (row < 4)
	{
		update_visibility(&top, grid[row][col]);
		update_visibility(&bottom, grid[3 - row][col]);
		row++;
	}
	return (top.visible == clues[TOP][col]
			&& bottom.visible == clues[BOTTOM][col]);
}

bool	check_row(int grid[4][4], int clues[4][4], int row)
{
	int					col;
	t_VisibilityInfo	left;
	t_VisibilityInfo	right;

	left.visible = 0;
	left.max_height = 0;
	right.visible = 0;
	right.max_height = 0;
	col = 0;
	while (col < 4)
	{
		update_visibility(&left, grid[row][col]);
		update_visibility(&right, grid[row][3 - col]);
		col++;
	}
	return (left.visible == clues[LEFT][row]
			&& right.visible == clues[RIGHT][row]);
}

bool	checker_fx(int grid[4][4], int clues[4][4])
{
	int	col;
	int	row;

	col = 0;
	while (col < 4)
	{
		if (!check_column(grid, clues, col))
			return (false);
		col++;
	}
	row = 0;
	while (row < 4)
	{
		if (!check_row(grid, clues, row))
			return (false);
		row++;
	}
	return (true);
}
