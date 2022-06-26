/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:26:21 by ferncarv          #+#    #+#             */
/*   Updated: 2022/05/17 20:24:10 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*aux1;

	len = ft_strlen(s1) + 1;
	aux1 = malloc(len);
	if (aux1)
	{
		ft_strlcpy(aux1, s1, len);
		return (aux1);
	}
	return (NULL);
}

#include <stdio.h>

int main(void)
{
	char	*teste;

	teste = "outra frase";
	printf("%15.p = %s \n", teste, teste);
	printf("%15.p = %s \n", ft_strdup(teste),ft_strdup(teste));
	return (0);
}