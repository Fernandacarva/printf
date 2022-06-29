/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:33:30 by ferncarv          #+#    #+#             */
/*   Updated: 2022/06/16 10:25:40 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char	*little, size_t len)
{
	size_t	aux;

	aux = ft_strlen(little);
	if (!aux)
	{
		return ((char *)big);
	}
	while (*big && aux <= len--)
	{
		if (!ft_strncmp(big, little, aux))
		{
			return ((char *)big);
		}
		big++;
	}
	return (0);
}
