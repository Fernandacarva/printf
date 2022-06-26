/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:22:01 by ferncarv          #+#    #+#             */
/*   Updated: 2022/05/17 18:06:51 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*aux1;

	aux1 = (char *)s;
	while (aux1)
	{
		if (*aux1 == c)
		{
			return (aux1);
		}
		aux1++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main(void) 
{
   const char str[] = "Fernanda";
   const char ch = 'r';
   char *ret;

   ret = ft_strchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}*/