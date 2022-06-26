/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 13:53:54 by ferncarv          #+#    #+#             */
/*   Updated: 2022/05/09 14:59:25 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*aux1;
	unsigned char	*aux2;

	aux1 = (unsigned char *)dst;
	aux2 = (unsigned char *)src;
	while (n--)
		*aux1++ = *aux2++;
	return (dst);
}

/*#include <stdio.h>
#include <string.h>*/

/*int	main(void)
{
   const char src[50] = "Olá";
   char dest[50];

   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, ft_strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}*/
