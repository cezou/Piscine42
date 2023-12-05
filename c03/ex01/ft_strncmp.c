/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:37:18 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/06 18:43:45 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n -1)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int	main(int argc, char **argv)
{
	argc = 0;
	int	ft_str = ft_strncmp(argv[1], argv[2], 10);
	int strncmp2 = strncmp(argv[1], argv[2], 10);
	printf("ft_strn    %d", ft_str);
	printf("\n");
	printf("strncmp    %d", strncmp2);
	return (0);
}
*/