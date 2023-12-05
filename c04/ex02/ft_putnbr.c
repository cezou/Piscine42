/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 21:41:45 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/19 18:05:20 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_aux(int nb)
{
	char	tempc;

	if (nb >= 10)
	{
		ft_putnbr_aux((int)nb / 10);
		tempc = (int)nb % 10 + '0';
		write (1, &tempc, 1);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void	ft_putnbr(int nb)
{	
	if (nb < 0)
		write(1, "-", 1);
	if (nb == -2147483648)
	{
		write(1, "2147483648", 10);
		return ;
	}
	if (nb < 0)
		ft_putnbr_aux(nb * -1);
	else
		ft_putnbr_aux(nb);
}

/*
int	main(void)
{
	int number = +2147483647;

	ft_putnbr(number);
	write(1, "\n", 1);
	return (0);
}
*/
