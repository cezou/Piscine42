/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 22:41:49 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/15 22:07:07 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int	ft_iterative_power(int nb, int power)
{
	int	pow;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	pow = nb;
	while (power > 1)
	{
		pow *= nb;
		power--;
	}
	return (pow);
}

// int	main(int ac, char **av)
// {
// 	ac = 0;
// 	printf("%d", ft_iterative_power(atoi(av[1]), atoi(av[2])));
// 	return (0);
// }