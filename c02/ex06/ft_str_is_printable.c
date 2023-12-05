/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 02:10:08 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/03 22:29:33 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			if (str[i] >= 32 && str[i] <= 126)
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
	char	str[] = "QWERTYUIOPASDFGHJKLZXCV+_`12345BNM<SPACE>\(10)";

	printf("%d", ft_str_is_printable(str));
	printf("\n");
	return (0);
}
*/