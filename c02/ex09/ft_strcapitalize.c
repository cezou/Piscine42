/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 02:06:20 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/04 17:47:13 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if ((str[i -1] < 'a' || str[i -1] > 'z')
			&& (str[i -1] < 'A' || str[i -1] > 'Z')
			&& (str[i -1] < '0' || str[i -1] > '9'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}	
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[] = "salut, commeNETt tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", str);
	printf("\n");
	printf("%s", ft_strcapitalize(str));
	printf("\n");
	return (0);
}
*/