/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshin <kshin@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:02:54 by kshin             #+#    #+#             */
/*   Updated: 2025/03/03 18:19:08 by kshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	make_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

void	make_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 47) || 
			(str[i] >= 58 && str[i] <= 64) || 
			(str[i] >= 91 && str[i] <= 96) || 
			(str[i] >= 123 && str[i] <= 126))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	make_lowercase(str);
	make_uppercase(str);
	return (str);
}
/*
int main ()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
	return 0;
}
*/
