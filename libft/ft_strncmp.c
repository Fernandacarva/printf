/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:44:29 by ferncarv          #+#    #+#             */
/*   Updated: 2022/05/30 17:31:42 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	while ((s1[count] != '\0' && s2[count]) != '\0' && count < n)
	{
		if (s1[count] != s2[count])
			return ((unsigned char) s1[count] - ((unsigned char) s2[count]));
		count++;
	}
	if (count == n)
		return (0);
	return ((unsigned char) s1[count] - ((unsigned char) s2[count]));
}
