/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernanda <fernanda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:31:40 by fernanda          #+#    #+#             */
/*   Updated: 2022/05/20 15:02:33 by fernanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}


/*int	main(void)
{
	char	*s; 
	int		fd;

	s = "Outra frase grande aqui.";
	fd = 1;
	ft_putendl_fd(s, fd);
	
	return (0);
}*/