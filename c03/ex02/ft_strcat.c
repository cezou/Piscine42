/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 19:46:20 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/07 11:50:06 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}

/*
int	main(int argc, char **argv)
{
	argc = 0;
	char	*ft_strcat2 = ft_strcat(argv[1], argv[2]);
	char	*strcat2 = strcat(argv[1], argv[2]);
	printf("ft_strcat  %s", ft_strcat2);
	printf("\n");
	printf("strcat     %s", strcat2);
	return (0);
}
*/