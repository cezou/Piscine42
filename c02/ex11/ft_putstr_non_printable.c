/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:20:51 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/04 17:47:35 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

void	write_base(int dec)
{
	char	*base;

	base = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, "0", 1);
	write(1, (unsigned char *)&base[dec % 16], 1);
}

void	ft_write_char_to_hexa(char c)
{
	int	dec;

	dec = c;
	while (dec >= 16)
	{
		write_base(dec % 16);
		dec = dec / 16;
	}
	write_base(dec % 16);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	if (str[0] != '\0')
	{
		i = 0;
		while (str[i])
		{
			if (str[i] < 32 || str[i] > 126)
				ft_write_char_to_hexa(str[i]);
			else
				write(1, &str[i], 1);
			i++;
		}
	}
}

/*
int	main(void)
{
	char test[] = "Coucou tu vas bien ?";

	test[6] = 10;

	ft_putstr_non_printable(test);
	return (0);
}
*/
