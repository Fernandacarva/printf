/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: fernanda <fernanda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:51:51 by fernanda          #+#    #+#             */
/*   Updated: 2022/05/23 15:51:58 by fernanda         ###   ########.fr       */
=======
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:28:46 by ferncarv          #+#    #+#             */
/*   Updated: 2022/05/17 18:18:20 by ferncarv         ###   ########.fr       */
>>>>>>> 9d13ff6b5cc2f757beebd4c03ab730842e14eedd
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*aux1;

	aux1 = (char *)s;
	if (*s == c)
		s++;
	return (aux1);
}

/*#include <stdio.h>
#include <string.h>
<<<<<<< HEAD
=======

>>>>>>> 9d13ff6b5cc2f757beebd4c03ab730842e14eedd
int main(void) 
{
   int len;
   const char str[] = "fernanda";
   const char ch = 'a';
   char *ret;
<<<<<<< HEAD
=======

>>>>>>> 9d13ff6b5cc2f757beebd4c03ab730842e14eedd
	ret = ft_strrchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}*/