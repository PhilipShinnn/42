/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:43:57 by kshin             #+#    #+#             */
/*   Updated: 2025/03/09 23:31:33 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header.h"

char	*g_dict[] = {"zero", "one", "two", "three", "four", "five", "six",
	"seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen",
	"fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
	"nineteen", "twenty", "thirty", "forty", "fifty", "sixty",
	"seventy", "eighty", "ninety", "hundred"};

char	*g_units[] = {"", "thousand", "million", "billion", "trillion",
	"quadrillion", "quintillion", "sextillion", "septillion",
	"octillion", "nonillion", "decillion", "undecillion"};

void	convert_to_words(int num, char *result)
{
	if (num >= 100)
	{
		strcat(result, g_dict[num / 100]);
		strcat(result, " hundred");
		num %= 100;
		if (num)
			strcat(result, " and ");
	}
	if (num >= 20)
	{
		strcat(result, g_dict[18 + num / 10]);
		if (num % 10)
		{
			strcat(result, "-");
			strcat(result, g_dict[num % 10]);
		}
	}
	else if (num > 0)
		strcat(result, g_dict[num]);
}

void	process_group(const char *input, int start,
		int length, int group_count, char *result)
{
	int		num;
	char	temp[4];

	strncpy(temp, &input[start], length);
	num = atoi(temp);
	if (num)
	{
		convert_to_words(num, result);
		if (group_count > 0)
		{
			strcat(result, " ");
			strcat(result, g_units[group_count]);
		}
	}
}

void	append_groups_in_reverse(int group_count,
		char groups[MAX_GROUPS][256], char *result)
{
	int	first;

	first = 1;
	while (group_count > 0)
	{
		group_count--;
		if (strlen(groups[group_count]) > 0)
		{
			if (!first)
				strcat(result, ", ");
			strcat(result, groups[group_count]);
			first = 0;
		}
	}
}

void	process_large_number(const char *input, char *result)
{
	int		length;
	int		pos;
	int		group_count;
	int		start;
	int		len;
	char	groups[MAX_GROUPS][256];

	length = strlen(input);
	pos = length;
	group_count = 0;
	while (pos > 0)
	{
		start = (pos >= 3) ? pos - 3 : 0;
		len = pos - start;
		process_group(input, start, len, group_count, groups[group_count]);
		pos -= 3;
		group_count++;
	}
	append_groups_in_reverse(group_count, groups, result);
	if (group_count == 0)
		strcpy(result, "zero");
}

int	validate_input(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
