/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:27:40 by ferncarv          #+#    #+#             */
/*   Updated: 2022/05/26 17:39:51 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	aux1;

	if (!s)
		return (NULL);
	aux1 = 0;
	str = (char *)malloc(sizeof(char) *(ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[aux1] != '\0')
	{
		str[aux1] = f(aux1, s[aux1]);
		aux1++;
	}
	str[aux1] = '\0';
	return (str);
}
