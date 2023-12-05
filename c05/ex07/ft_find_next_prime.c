/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 19:08:29 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/15 22:09:02 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

int	ft_is_prime(int nb)
{
	long	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	long	i;

	if (ft_is_prime(nb))
		return (nb);
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		i = nb + 1;
	else
		i = nb;
	while (1 == 1)
	{
		if (ft_is_prime(i))
			return (i);
		i += 2;
	}
}

// int	main(int ac, char **av)
// {
// 	ac = 0;
// 	printf("%d", ft_find_next_prime(atoi(av[1])));
// 	return (0);
// }
