/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:33:30 by ferncarv          #+#    #+#             */
/*   Updated: 2022/05/17 18:17:37 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	int		i_aux2;

	index = 0;
	if (needle == NULL)
		return ((char *)haystack);
	while (haystack[index] != '\0' && index < len)
	{
		i_aux2 = 0;
		if (haystack[index] == needle[i_aux2])
		{
			while (haystack[index] == needle[i_aux2])
			{
				index++;
				i_aux2++;
				if (needle[i_aux2] == '\0')
				{
					index -= i_aux2;
					return ((char *)haystack + index);
				}
			}
		}
		index++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main(void) 
{
   const char haystack[20] = "Tutoria lsPointTest";
   const char needle[10] = " ";
   char *ret;

   ret = ft_strnstr(haystack, needle, 20);

   printf("The substring is: %s\n", ret);
   
   return(0);
}*/
