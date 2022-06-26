/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:15:07 by ferncarv          #+#    #+#             */
/*   Updated: 2022/05/17 18:11:55 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*aux1;
	char	*aux2;
	size_t	n;
	size_t	tam;

	aux1 = dst;
	aux2 = (char *)src;
	n = size;
	while (n-- != 0 && *aux1 != '\0')
		aux1++;
	tam = aux1 - dst;
	n = size - tam;
	if (n == 0)
		return (tam + ft_strlen(aux2));
	while (*aux2 != '\0')
	{
		if (n != 1)
		{
			*aux1++ = *aux2;
				n--;
		}
		aux2++;
	}
	*aux2 = '\0';
	return (tam + (aux2 - src));
}
