/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:42:34 by fernanda          #+#    #+#             */
/*   Updated: 2022/06/30 00:58:48 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	count;

	count = 0;
	if (!s)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (s[count] != '\0')
	{
		write(fd, &s[count], 1);
		count++;
	}
	return (ft_strlen(s));
}
