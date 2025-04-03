/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuchow <yuchow@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 12:48:32 by yuchow            #+#    #+#             */
/*   Updated: 2025/03/02 23:19:52 by yuchow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

int		input(int argc, char *argv[], int clues[4][4]);

bool	solver_fx(int grid[4][4], int clues[4][4],
			int current_row, int current_col);

void	print_grid(int grid[4][4])
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	initialise_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	clues[4][4];
	int	grid[4][4];

	initialise_grid(grid);
	if (input(argc, argv, clues) != 0)
		return (1);
	if (solver_fx(grid, clues, 0, 0) == true)
		print_grid(grid);
	else
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}
