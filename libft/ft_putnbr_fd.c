/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:51:28 by fernanda          #+#    #+#             */
/*   Updated: 2022/06/30 01:15:07 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n)
{
	int		len;
	char	*s;

	s = ft_itoa(n);
	len = ft_putstr_fd(s, 1);
	free(s);
	return (len);
}
