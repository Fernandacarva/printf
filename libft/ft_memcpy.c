/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 13:53:54 by ferncarv          #+#    #+#             */
/*   Updated: 2022/05/30 17:38:20 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*aux1;
	unsigned char	*aux2;

	if (!dst && !src && n > 0)
		return (0);
	aux1 = (unsigned char *)dst;
	aux2 = (unsigned char *)src;
	while (n--)
		*aux1++ = *aux2++;
	return (dst);
}
