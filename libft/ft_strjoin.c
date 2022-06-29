/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:25:54 by fernanda          #+#    #+#             */
/*   Updated: 2022/05/30 18:37:36 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			aux1;
	size_t			aux2;
	size_t			sum;
	char			*str;

	if (!s1 || !s2)
		return (NULL);
	sum = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(sum);
	aux1 = 0;
	aux2 = 0;
	if (str == NULL)
		return (NULL);
	while (s1[aux1] != '\0')
	{
		str[aux1] = s1[aux1];
		aux1++;
	}
	while (s2[aux2] != '\0')
	{
		str[aux1 + aux2] = s2[aux2];
		aux2++;
	}
	str[aux1 + aux2] = '\0';
	return (str);
}
