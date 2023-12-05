/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 22:45:08 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/06 19:04:59 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		len_str;

	len_str = 0;
	while (to_find[len_str])
		len_str++;
	if (len_str < 1)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == 0)
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/*
int	main(int argc, char **argv)
{
	argc = 0;
	char	*ft_strstr2 = ft_strstr(argv[1], argv[2]);
	char	*strstr2 = strstr(argv[1], argv[2]);
	printf("ft_strstr  %s", ft_strstr2);
	printf("\n");
	printf("strstr     %s", strstr2);
	return (0);
}
*/