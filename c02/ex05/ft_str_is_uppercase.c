/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 02:10:08 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/04 18:17:06 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
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
	char	str[] = "QWERTYUIOPASDFGHJKLZXCVBNM";

	printf("%d", ft_str_is_uppercase(str));
	printf("\n");
	return (0);
}
*/