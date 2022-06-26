/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:40:26 by ferncarv          #+#    #+#             */
/*   Updated: 2022/05/17 18:05:45 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*aux1;
	char		*aux2;
	size_t		suport;

	suport = 0;
	aux1 = (char *)dst;
	aux2 = (char *)src;
	if (aux1 > aux2)
		while (len-- > 0)
			aux1[len] = aux2[len];
	else
	{
		while (suport < len)
		{
			aux1[suport] = aux2[suport];
			suport++;
		}
	}
	return (dst);
}

/*#include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "antes de mudar";
   const char src[]  = "coisas a";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 15);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}*/
