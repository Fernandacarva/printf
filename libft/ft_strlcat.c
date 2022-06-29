/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:15:07 by ferncarv          #+#    #+#             */
/*   Updated: 2022/06/01 16:02:26 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	aux;
	size_t	aux2;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	aux = ft_strlen(dst);
	aux2 = 0;
	while (src[aux2] != '\0' && aux + 1 < size)
	{
		dst[aux] = src[aux2];
		aux++;
		aux2++;
	}
	dst[aux] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[aux2]));
}
