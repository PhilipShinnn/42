/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main (사본).c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:33:27 by kshin             #+#    #+#             */
/*   Updated: 2025/03/29 18:35:48 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_DIGITS 100
#define MAX_GROUPS 35 
char *dict[] = {
    "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
    "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
    "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety",
    "hundred"
};

char *units[] = {
    "", "thousand", "million", "billion", "trillion", "quadrillion", "quintillion",
    "sextillion", "septillion", "octillion", "nonillion", "decillion", "undecillion"
};

void convert_to_words(int num, char *result) {
    if (num == 0) {
        return;
    }

    if (num >= 100) {
        int hundreds = num / 100;
        num %= 100;
        strcat(result, dict[hundreds]);
        strcat(result, " hundred");
        if (num > 0) {
            strcat(result, " and ");
        }
    }

    if (num >= 20) {
        int tens = num / 10;
        int ones = num % 10;
        strcat(result, dict[18 + tens]);
        if (ones > 0) {
            strcat(result, "-");
            strcat(result, dict[ones]);
        }
    } else if (num > 0) {
        strcat(result, dict[num]);
    }
}

void process_large_number(const char *input, char *result) {
    int length = strlen(input);
    int group_count = 0;
    char groups[MAX_GROUPS][256] = {""}; 
    int pos = length;
    while (pos > 0) {
        int start = (pos >= 3) ? pos - 3 : 0;
        char temp[4] = "";
        strncpy(temp, &input[start], pos - start);
        temp[pos - start] = '\0';

        int num = atoi(temp);
        if (num > 0) {
            convert_to_words(num, groups[group_count]);
            if (group_count > 0) {
                strcat(groups[group_count], " ");
                strcat(groups[group_count], units[group_count]);
            }
        }
        pos -= 3;
        group_count++;
    }

    int first = 1;
    for (int i = group_count - 1; i >= 0; i--) {
        if (strlen(groups[i]) > 0) {
            if (!first) {
                strcat(result, ", ");
            }
            strcat(result, groups[i]);
            first = 0;
        }
    }

    if (first) {
        strcpy(result, "zero");
    }
}

int validate_input(const char *str) {
    while (*str) {
        if (!isdigit(*str)) {
            return 0;
        }
        str++;
    }
    return 1; 
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    char *input = argv[1];
    char result[1024] = "";

    if (!validate_input(input)) {
        printf("Error\n");
        return 1;
    }

    process_large_number(input, result);

    printf("%s\n", result);
    return 0;
}
