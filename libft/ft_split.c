/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernanda <fernanda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 22:35:33 by fernanda          #+#    #+#             */
/*   Updated: 2022/05/25 21:33:18 by fernanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_first(char **count, int sep, char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**count;
	int		index;
	int		sep;

	sep = 0;
	index = 0;
	while (s[index])
	{
		if (s[index] != c && (s[index + 1] == c || s[index + 1] == '\0'))
			sep++;
		index++;
	}
	count = (char **)malloc(sizeof(count) * (sep + 1));
	if (!count)
		return (NULL);
	ft_first(count, sep, s, c);
	return (count);
}

static char	**ft_first(char **count, int sep, char const *s, char c)
{
	int	aux1;
	int	aux2;
	int	index;

	aux1 = 0;
	aux2 = 0;
	index = 0;
	while (index < sep)
	{
		aux1 = aux1 + aux2;
		while (s[aux1] == c)
			aux1++;
		aux2 = 0;
		while (s[aux1 + aux2] != c)
			aux2++;
		count[index] = ft_substr(s, aux1, aux2);
		if (!count[index])
		{
			while (index)
				free(count[index--]);
			return (NULL);
		}
		index++;
	}
	return (count);
}

// #include <stdio.h>

// int    main(void)
// {
//     char    *teste1;
//     char    c;

//     c = ' ';
//     teste1 = " Mi nha       c asa minha v ida    ";
//     printf("(E)%p \n", ft_split(teste1, c));
//     return (0);
// }