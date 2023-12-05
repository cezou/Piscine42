/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:40:57 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/20 12:42:16 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>

int	ft_atoi(char *str)
{
	int		i;
	int		pair_ou_impair;
	int		atoi;

	i = 0;
	pair_ou_impair = 0;
	atoi = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			pair_ou_impair++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		atoi *= 10;
		atoi += str[i] - '0';
		i++;
	}
	if (pair_ou_impair % 2 == 1)
		atoi = -atoi;
	return (atoi);
}

// int	main(int ac, char **av)
// {
// 	if (ac != 2)
// 		write(1, "ratio", 5);
// 	else
// 		ft_putnbr(ft_atoi(av[1]));
// 	return (0);
// }
