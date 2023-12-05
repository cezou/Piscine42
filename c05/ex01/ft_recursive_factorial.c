/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 21:26:10 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/15 22:06:59 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	if (nb != 1)
	{
		nb *= ft_recursive_factorial(nb -1);
	}
	return (nb);
}

// int	main(int ac, char **av)
// {
// 	ac = 0;
// 	printf("%d", ft_recursive_factorial(atoi(av[1])));
// 	return (0);
// }
