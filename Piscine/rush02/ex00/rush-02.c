/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:33:27 by kshin             #+#    #+#             */
/*   Updated: 2025/03/09 23:31:54 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int	main(int argc, char *argv[])
{
	char	*input;
	char	result[1024];

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	input = argv[1];
	if (!validate_input(input))
	{
		printf("Error\n");
		return (1);
	}
	process_large_number(input, result);
	printf("%s\n", result);
	return (0);
}
