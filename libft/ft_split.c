/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 22:35:33 by fernanda          #+#    #+#             */
/*   Updated: 2022/06/02 11:50:02 by ferncarv         ###   ########.fr       */
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
	if (!s)
		return (NULL);
	while (s[index])
	{
		if (s[index] != c && (s[index + 1] == c || s[index + 1] == '\0'))
			sep++;
		index++;
	}
	count = (char **)malloc(sizeof(char *) * (sep + 1));
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
	index = -1;
	while (++index < sep)
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
	}
	count[index] = NULL;
	return (count);
}
