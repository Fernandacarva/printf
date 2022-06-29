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
	if (n == '%')
		return (ft_putchar_fd('%', 1));
	if (n == 'c')
        return (ft_out_c(va_arg(aux, int)));
    if (n == 's')
        return (ft_out_s(va_arg(aux, char *)));
    if (n == 'p')
        return (ft_out_p(va_arg(aux, unsigned long)));
    if (n == 'd' || n == 'i')
        return (ft_out_dec(va_ar(aux, int)));
    if (n == 'u')
        return (ft_out_u(va_arg(aux, unsigned int)));
    if (n == 'x')
        return (ft_out_x(va_arg(aux, unsigned int)));
    if (n == 'X')
        return (ft_out_X(va_arg(aux, unsigned int)));
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
