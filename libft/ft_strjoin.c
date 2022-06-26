/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernanda <fernanda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:25:54 by fernanda          #+#    #+#             */
/*   Updated: 2022/05/23 17:26:17 by fernanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		aux;
	int		len1;
	int		len2;
	char	*str;

	if (s1 || s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		str = (char *)malloc(sizeof(char) * (len1 + len2 +1));
		if (str == NULL)
			return (NULL);
		aux = -1;
		while (s1[++aux])
			str[aux] = s1[aux];
		aux = -1;
		while (s2[++aux])
		{
			str[len1] = s2[aux];
			len1++;
		}
		str[len1] = '\0';
		return (str);
	}
	return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
// 	char	*teste1;
// 	char	*teste2;

// 	teste1 = "Fernanda";
// 	teste2 = "Carvalho";
// 	printf("%s\n", ft_strjoin(teste1, teste2));
// }