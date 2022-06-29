/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 09:18:25 by fernanda          #+#    #+#             */
/*   Updated: 2022/05/26 17:42:01 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	count;
	size_t	s_len;

	s_len = 0;
	substr = (char *)malloc(sizeof(*substr) * (len + 1));
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
