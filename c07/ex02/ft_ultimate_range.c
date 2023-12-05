/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:02:46 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/13 17:12:28 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	temp;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	i = 0;
	temp = min;
	while (temp < max)
	{
		(*range)[i] = temp;
		temp++;
		i++;
	}
	return (max - min);
}

// int	main(int ac, char **av)
// {
// 	int	*range;
// 	if (ac != 3)
// 		printf("Error");
// 	else
// 	{
// 		printf("%d", ft_ultimate_range(&range, atoi(av[1]), atoi(av[2])));
// 		free(range);
// 	}
// 	return (0);
// }