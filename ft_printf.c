/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:36:21 by ferncarv          #+#    #+#             */
/*   Updated: 2022/06/22 15:37:54 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_printf_define(va_list aux, char n)
{
     if (n == 'c')
        return (out_c(aux));
    if (n == 's')
        return (out_s(aux));
    if (n == 'p')
        return (out_p(aux));
    if (n == 'd')
        return (out_d(aux));
    if (n == 'i')
        return (out_i(aux));
    if (n == 'u')
        return (out_u(aux));
    if (n == 'x')
        return (out_x(aux));
    if (n == 'X')
        return (out_X(aux));
}

int	ft_printf(const char *base, ...)
{
	va_list	aux;
	int		index;
	int		sum;

	index = 0;
	sum = 0;
	va_start(aux, base);
	while (base[index] != '\0')
	{
		if (base[index] == '%' && ft_strchr("cspdiuxX", base[index + 1]))
		{
			sum += ft_printf_define(base[index + 1], base);
			index++;
		}
		else
			ft_putchar_fd(base[index]);
		index++;
	}
	va_end(base);
	return (sum);
}
