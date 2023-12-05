/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:37:54 by cviegas           #+#    #+#             */
/*   Updated: 2023/07/13 17:28:04 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	lenbsep(char *s, char *charset, int indice_s)
{
	int	i;

	i = 0;
	while (!is_sep(s[indice_s], charset) && s[indice_s])
	{
		indice_s++;
		i++;
	}
	return (i);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_nb_mots(char *str, char *charset)
{
	int	i;
	int	nb_mots;

	i = 0;
	nb_mots = 0;
	while (str[i])
	{
		if (is_sep(str[i], charset))
			nb_mots++;
		i++;
	}
	return (nb_mots + 1);
}

char	**ft_split(char *str, char *charset)
{
	char	**ret;
	int		i;
	int		j;
	int		k;

	ret = malloc(sizeof(char *) * (ft_nb_mots(str, charset) + 1));
	k = 0;
	j = 0;
	while (str[j])
	{
		if (lenbsep(str, charset, j) > 0)
		{
			ret[k] = malloc((lenbsep(str, charset, j) + 1) * sizeof(char));
			i = 0;
			while (lenbsep(str, charset, j) > 0)
				ret[k][i++] = str[j++];
			ret[k][i] = 0;
			k++;
		}
		else
			j++;
	}
	ret[k] = 0;
	return (ret);
}

// void afficherTableauStrings(char **tableau) {
//     int i = 0;
//     while (tableau[i]) {
//         printf("%s\n", tableau[i]);
//         i++;
//     }
// }
// int	main(int ac, char **av)
// {
// 	if (ac != 3)
// 		printf("Erreur");
// 	else
// 	{
// 		afficherTableauStrings(ft_split(av[1], av[2]));
// 	}
// 	return (0);
// }