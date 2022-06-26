/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 12:08:44 by ferncarv          #+#    #+#             */
/*   Updated: 2022/05/09 09:48:16 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*#include <stdio.h>

int main()
{
	char b[3] = "123";
	char c = 'f';
	
	printf("%s\n", b);
	ft_bzero((void *) b, 3);
	printf("%s\n", b);
	return (3);
}*/