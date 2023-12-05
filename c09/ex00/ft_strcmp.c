/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:37:18 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/16 02:54:04 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int	main(int argc, char **argv)
{
	argc = 0;
	int	ft_str = ft_strcmp(argv[1], argv[2]);
	int str_o = strcmp(argv[1], argv[2]);
	printf("ft_str    %d", ft_str);
	printf("\n");
	printf("str       %d", str_o);
	return (0);
}
*/