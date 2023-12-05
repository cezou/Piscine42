/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:55:05 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/04 18:14:18 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size < 1)
	{
		return (i);
	}
	else
	{
		while (src[i] != '\0' && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i - 1);
}

/*
int	main(void)
{
	char	str[10] = "squidgame";
	char	copie[10];

	printf("%u", ft_strlcpy(copie, str, 9));
	printf("\n");
	printf("%u", ft_strlcpy(copie, str, 10));
	printf("%s", str);
	return (0);
}
*/