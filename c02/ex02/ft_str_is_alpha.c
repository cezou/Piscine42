/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 01:32:07 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/03 22:26:10 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			if ((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z'))
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
	#include <stdio.h>
	#include <string.h>
	char	str[] = "0";

	printf("%d", ft_str_is_alpha(str));
	printf("\n");
	return (0);
}
*/
