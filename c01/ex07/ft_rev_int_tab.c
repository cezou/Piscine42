/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:40:00 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/01 13:43:40 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	j = size -1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

/*
int	main(void)
{
	int	tab[4] = {1, 2 , 3, 4};
	ft_rev_int_tab(tab, 4);
	int i = 0 ;
	while(i<4)
	{
		printf("%d",tab[i]);
		i++;
	}
}
*/
