/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 21:26:10 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/16 00:23:22 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	facto;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	facto = 1;
	i = 2;
	while (i <= nb)
	{
		facto *= i;
		i++;
	}
	return (facto);
}

// int	main(int ac, char **av)
// {
// 	ac = 0;
// 	printf("%d", ft_iterative_factorial(atoi(av[1])));
// 	return (0);
// }