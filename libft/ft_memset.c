/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:27:11 by ferncarv          #+#    #+#             */
/*   Updated: 2022/05/07 11:59:45 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;

	ptr = b;
	while (len-- > 0)
		*ptr++ = c;
	return (b);
}

/*#include <stdio.h>

int main()
{
	char b[3] = "123";
	char c = 'f';
	
	printf("%p\n", b);
	printf("%s\n", ft_memset(b, c, 3));
	printf("%p\n", b);
	return (3);
}*/