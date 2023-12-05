/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:28:03 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/15 22:08:43 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

int	ft_sqrt(int nb)
{	
	long	i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb / 2 > 46340)
		i = 46340;
	else
		i = nb / 2;
	while (1 == 1)
	{
		if (i * i < nb)
			return (0);
		if (i * i == nb)
			return (i);
		i--;
	}
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		printf("%d\n",ft_sqrt(atoi(av[1])));
// 	}
// }
