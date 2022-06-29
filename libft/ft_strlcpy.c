/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:18:03 by ferncarv          #+#    #+#             */
/*   Updated: 2022/06/06 16:55:56 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	aux1;

	aux1 = ft_strlen(src);
	if (aux1 + 1 < dstsize)
	{
		ft_memcpy(dst, src, aux1 + 1);
	}
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
			dst[dstsize - 1] = '\0';
	}
	return (aux1);
}
