/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernanda <fernanda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:42:34 by fernanda          #+#    #+#             */
/*   Updated: 2022/05/20 14:46:10 by fernanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int count;
	
	count = 0;
	if (s)
	{
		while (s[count] != '\0')
		{
			write(fd, &s[count],1);
			count++;
		}
	}
}

/*int main(void)
{
	int		ft;
	char	*teste;
	
	ft = 0;
	teste = "escreva uma frase um pouquinho maior\n";
	ft_putstr_fd(teste, ft);
	return (0);
}*/