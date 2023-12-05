/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:53:48 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/07 11:47:56 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (nb < 1)
		return (dest);
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j] && j < nb)
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
	char	*ft_strncat2 = ft_strncat(argv[1], argv[2], 10);
	char *strncat2 = strncat(argv[1], argv[2], 10);
	printf("ft_strcat  %s", ft_strncat2);
	printf("\n");
	printf("strncat    %s", strncat2);
	printf("\n");
	printf("\n");
	if (strcmp(strncat2, ft_strncat2) == 0)
		printf("Yesay");
	else
		printf("Nope");
	return (0);
}
*/