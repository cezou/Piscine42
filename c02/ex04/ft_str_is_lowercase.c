/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 02:06:20 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/02 02:17:20 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			if (str[i] >= 97 && str[i] <= 122)
				i++;
			else
				return (0);
		}
	}
	return (1);
}

/*
int	main(void)
{
	char	str[] = "";

	printf("%d", ft_str_is_lowercase(str));
	printf("\n");
	return (0);
}
*/