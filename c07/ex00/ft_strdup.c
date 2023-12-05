/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:38:50 by cviegas           #+#    #+#             */
/*   Updated: 2023/11/10 19:32:35 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	unsigned int	i;
	char			*dup;

	i = 0;
	while (src[i])
		i++;
	dup = malloc(i * sizeof(char) + 1);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Usage: %s <string>\n", argv[0]);
		return 1;
	}
	char *original = argv[1];
	char *dup_ft = ft_strdup(original);
	char *dup_sys = strdup(original);
	printf("Original string: %s\n", original);
	printf("ft_strdup result: %s\n", dup_ft);
	printf("strdup result: %s\n", dup_sys);
	free(dup_ft);
	free(dup_sys);
	return 0;
}