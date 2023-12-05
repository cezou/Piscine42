/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 01:31:38 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/17 03:08:12 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	unsigned int	i;
	char			*dup;

	dup = malloc(ft_strlen(src) * sizeof(char) + 1);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	arr = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		if (!arr[i].copy)
			return (NULL);
		i++;
	}
	arr[i].size = 0;
	arr[i].str = 0;
	arr[i].copy = 0;
	return (arr);
}

// int	main(int ac, char **av)
// {
// 	struct s_stock_str	*arr;
// 	int					i;

// 	arr = ft_strs_to_tab(ac - 1, &av[1]);
// 	if (!arr)
// 		return (1);
// 	ft_show_tab(arr);
// 	i = 0;
// 	while (arr[i].str)
// 	{
// 		free(arr[i].copy);
// 		i++;
// 	}
// 	free(arr);
// 	return (0);
// }
