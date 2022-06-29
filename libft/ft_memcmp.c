/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:53:44 by ferncarv          #+#    #+#             */
/*   Updated: 2022/05/26 15:54:19 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*aux1;
	unsigned char	*aux2;

	aux1 = (unsigned char *) s1;
	aux2 = (unsigned char *) s2;
	while (n--)
	{
		if (*aux1 != *aux2)
			return (*aux1 - *aux2);
		aux1++;
		aux2++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
	char buffer1[] = "D";
	char buffer2[] = "e";
	int n;

  n=memcmp ( buffer1, buffer2, sizeof(buffer1) );

  if (n>0) printf ("'%s' is greater than '%s'.\n",buffer1,buffer2);
  else if (n<0) printf ("'%s' it's smaller than '%s'.\n",buffer1,buffer2);
  else printf ("'%s' equals '%s'.\n",buffer1,buffer2);

  return 0;
}*/