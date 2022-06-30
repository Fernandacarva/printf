/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 02:30:40 by ferncarv          #+#    #+#             */
/*   Updated: 2022/06/30 02:30:45 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_p(unsigned long n, char *base)
{
	int				len;
	char			*s;
	unsigned long	nbr;

	nbr = (unsigned long) n;
	s = ft_itoa_hex(n, base);
	len = ft_putstr_fd(s, 1);
	free(s);
	return (len);
}
