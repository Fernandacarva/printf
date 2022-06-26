/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernanda <fernanda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 22:02:36 by fernanda          #+#    #+#             */
/*   Updated: 2022/05/25 21:29:48 by fernanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*aux1;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	aux1 = ft_substr((char *)s1, 0, len + 1);
	return (aux1);
}

// #include <stdio.h>

// int main(void)
// {
// 	char	teste;
// 	char	teste2;
	
// 	teste = 'ok';
// 	teste2 = 'ak';
// 	printf("%s\n", ft_strtrim(teste, teste2));
// 	return (0);
// }