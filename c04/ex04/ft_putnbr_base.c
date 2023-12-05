/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:10:37 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/20 12:42:01 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	is_in_string(char c, char *str, int indice)
{
	int	i;

	i = 0;
	while (i < indice)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_recursif(long nbr, char *base, long modulo)
{	
	if (nbr != 0)
	{
		ft_putnbr_recursif((long)nbr / modulo, base, modulo);
		write(1, &base[(long)nbr % modulo], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	base_modulo;
	long	i;
	long	n;

	n = (long int)nbr;
	base_modulo = ft_strlen(base);
	if (base_modulo <= 1)
		return ;
	i = 0;
	while (i < base_modulo)
	{
		if (base[i] == '-' || base[i] == '+'
			|| is_in_string(base[i], base, i))
			return ;
		i++;
	}
	if (!n)
		write (1, base, 1);
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	ft_putnbr_recursif(n, base, base_modulo);
}

// int	main(int ac, char **av)
// {
// 	if (ac != 3)
// 		printf("Ratio.");
// 	else
// 		ft_putnbr_base(atoi(av[1]), av[2]);
// }