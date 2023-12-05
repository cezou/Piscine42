/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:53:48 by cviegas           #+#    #+#             */
/*   Updated: 2023/11/07 20:49:42 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

unsigned int	ft_strlen(char *squid)
{
	unsigned int	i;

	i = 0;
	while (squid[i])
		i++;
	return (i);
}

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;

	dlen = ft_strlen(dest);
	i = 0;
	while (src[i] && (dlen + i + 1) < size)
	{
		dest[i + dlen] = src[i];
		i++;
	}
	dest[i + dlen] = 0;
	if (size < dlen)
		return (size + ft_strlen(src));
	else
		return (dlen + ft_strlen(src));
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("ft_strlcat  %u\n", ft_strlcat(av[1], av[2], atoi(av[3])));
		printf("strlcat     %u\n", strlcat(av[1], av[2], atoi(av[3])));
	}
	else
	{
		printf("ratio");
	}
	return (0);
}