/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:21:52 by ferncarv          #+#    #+#             */
/*   Updated: 2022/06/06 12:12:03 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	aux1;

	if (!s)
		return ;
	aux1 = 0;
	while (s[aux1] != '\0')
	{
		f(aux1, &s[aux1]);
		aux1++;
	}
}
