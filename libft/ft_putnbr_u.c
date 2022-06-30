/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:51:28 by fernanda          #+#    #+#             */
/*   Updated: 2022/06/30 01:18:50 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int	ft_putnbr_u(unsigned int n)
{
	int		len;
	char	*s;

	s = ft_itoa_u(n);
	len = ft_putstr_fd(s, 1);
	free(s);
	return (len);
}
