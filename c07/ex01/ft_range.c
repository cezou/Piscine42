/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:09:43 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/13 16:25:47 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	tempmin;

	if (min >= max)
		return (0);
	range = malloc(sizeof(int) * (max - min));
	i = 0;
	tempmin = min;
	while (i < max - min)
	{
		range[i] = tempmin;
		i++;
		tempmin++;
	}
	return (range);
}

/*
int	main(void)
{
	int	min = 2;
	int	max = 2;
	int	i;

	int	*result = ft_range(min, max);

	if (result == NULL)
	{
		printf("Pointeur nul : min >= max\n");
		return (1);
	}

	printf("Range of numbers from %d to %d:\n", min, max);

	i = 0;
	while (i < max - min)
	{
		printf("%d ", result[i]);
		i++;
	}
	printf("\n");
	free(result);
	return (0);
}
*/