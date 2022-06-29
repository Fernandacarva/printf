/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:28:46 by ferncarv          #+#    #+#             */
/*   Updated: 2022/05/30 11:39:55 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	aux;

	aux = ft_strlen(s);
	while (aux >= 0)
	{
		if (s[aux] == c)
			return ((char *) &s[aux]);
		aux--;
	}
	return (0);
}
