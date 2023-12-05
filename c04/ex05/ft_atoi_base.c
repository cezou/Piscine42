/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 00:54:35 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/19 18:05:59 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	check_doubles(char c, char *base, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (base[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	verify_base(char *base)
{
	int	i;
	int	len;

	len = 0;
	while (base[len])
		len++;
	if (len <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (!check_doubles(base[i], base, i)
			|| base[i] == '+' || base[i] == '-'
			|| (base[i] >= 9 && base[i] <= 13)
			|| base[i] == ' ')
			return (0);
		i++;
	}
	return (1);
}

int	check_base(char c, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base_aux(char *str, char *base, int i, int len)
{
	long	atoibase;
	int		j;

	atoibase = 0;
	while (str[i])
	{
		j = 0;
		if (!check_base(str[i], base))
			break ;
		while (base[j])
		{
			if (str[i] == base[j])
			{
				atoibase += j % len;
				atoibase *= len;
				break ;
			}
			j++;
		}
		i++;
	}
	atoibase /= len;
	return (atoibase);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		len;

	if (!verify_base(base))
		return (0);
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	len = 0;
	while (base[len])
		len++;
	return (ft_atoi_base_aux(str, base, i, len) * sign);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 	{
// 		if (verify_base(av[2]))
// 			printf("La base est valide\n");
// 		else
// 			printf("La base n'est pas valide\n");
// 		printf("ft_atoi_base : %d\n",ft_atoi_base(av[1],av[2]));
// 	}
// }