/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:09:06 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/01 13:43:12 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
int	main(void)
{
	char	strsamysquid[5];

	strsamysquid[0] = 's';
	strsamysquid[1] = 'a';
	strsamysquid[2] = 'm';
	strsamysquid[3] = 'y';
	strsamysquid[4] = '\0';
	printf("%s",strsamysquid);
	printf("%d",ft_strlen(""));
	printf("%d",ft_strlen("1"));
	printf("%d",ft_strlen("wqeqweqe"));
	printf("%d",ft_strlen("ewew"));
	printf("%d",ft_strlen("squidgame"));
	return (0);
}
*/