/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernanda <fernanda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 09:18:25 by fernanda          #+#    #+#             */
/*   Updated: 2022/05/25 20:44:11 by fernanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	count;
	size_t	s_len;
	
	s_len = 0;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr || !s)
		return (NULL);
	count = 0;
	while (s[count] != '\0')
	{
		if (count >= start && s_len < len)
		{
			substr[s_len] = s[count];
				s_len++;
		}
		count++;
	}
	substr[s_len] = '\0';	
	
	return (substr);
}


/*#include <stdio.h>

int main(void)
{
	char	teste[] = "Amora";
	unsigned int	aux;
	size_t	tam;
	
	aux = 0;
	tam = 6;
	printf("%s\n", ft_substr(teste, aux, tam));
		
	return (0);
}*/
