/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 01:25:14 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/13 17:30:10 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = 0;
	return (s1);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	tlen(int size, char **strs)
{	
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;

	if (size <= 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	str = malloc(tlen(size, strs) + ft_strlen(sep) * (size -1) + 1);
	i = 0;
	*str = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size -1)
			ft_strcat(str, sep);
		i = i + 1;
	}
	return (str);
}

// int	main(int ac, char **av)
// {	
// 	printf("%s\n", ft_strjoin(ac - 2, av + 1, av[ac - 1]));
// 	return (0);
// }
