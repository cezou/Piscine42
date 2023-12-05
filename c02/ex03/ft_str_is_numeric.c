/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 02:01:11 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/03 22:27:06 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			if (str[i] >= '0' && str[i] <= '9')
				i++;
			else
				return (0);
		}
	}
	return (1);
}

/*
int	main(void)
{
	char	str[] = "";

	printf("%d", ft_str_is_numeric(str));
	printf("\n");
	return (0);
}
*/
