/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:49:29 by kshin             #+#    #+#             */
/*   Updated: 2025/03/12 00:23:07 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print(char c[], int n)
{
    int count;
    count = 0;
    while (count < n)
        ft_putchar(c[count++]);
}

void ft_cal(char c[], int n)
{
    int count;
    int value;
    int flag;

    flag = 0;
    count = n - 1;
    while (count >= 1)
    {
        if (c[count] < '0' + 9 - (n - count)) // 올바르게 범위 설정
        {
            flag = 1;
            c[count]++;
            value = count + 1;
            while (value < n) // 배열의 값을 올바르게 증가시킴
            {
                c[value] = c[value - 1] + 1;
                value++;
            }
            break; // 조건을 만족하면 반복을 종료
        }
        count--;
    }
    if (flag == 0)
        c[n - 1]++; // 마지막 자리를 증가시킴
}

void ft_print_combn(int n)
{
    char c[10];
    int i;

    i = 0;
    while (i < n)
    {
        c[i] = '0' + i;
        i++;
    }

    while (c[0] <= '9' + (n - 1)) // 첫 번째 자리가 올바른 범위 내에 있을 때
    {
        ft_print(c, n);
        if (c[0] < '9' + (n - 1))
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        ft_cal(c, n);
    }
}

int	main(int argc, char **argv)
{
	int	n;

	if (argc == 2)
	{
		n = *argv[1] - '0';
		ft_print_combn(n);
	}
	write(1, "\n", 1);
	return (0);
}

