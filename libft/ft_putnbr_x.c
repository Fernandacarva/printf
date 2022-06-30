/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 01:59:36 by ferncarv          #+#    #+#             */
/*   Updated: 2022/06/30 02:29:13 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_x(unsigned int n, char *base)
{
	int		len;
	char	*s;

	s = ft_itoa_hex(n, base);
	len = ft_putstr_fd(s, 1);
	free(s);
	return (len);
}
