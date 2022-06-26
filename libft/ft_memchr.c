/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:55:06 by ferncarv          #+#    #+#             */
/*   Updated: 2022/05/17 17:56:53 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*aux1;

	aux1 = s;
	while (n-- > 0)
	{
		if (*aux1 == c)
			return ((char *) aux1);
		aux1++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int main(void) 
{
   const char str[] = "fernanda";
   const char ch = 'd';
   char *ret;

   ret = ft_memchr(str, ch, ft_strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}*/
