/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:36:21 by ferncarv          #+#    #+#             */
/*   Updated: 2022/06/30 02:47:04 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_define(va_list aux, char n)
{
	int	sum;

	sum = 0;
	if (n == '%')
		return (ft_putchar_fd(n, 1));
	if (n == 'c')
		return (ft_putchar_fd(va_arg(aux, int), 1));
	if (n == 's')
		return (ft_putstr_fd(va_arg(aux, char *), 1));
	if (n == 'p')
	{
		sum += ft_putstr_fd("0x", 1);
		sum += ft_putnbr_p(va_arg(aux, unsigned long), "0123456789abcdef");
		return (sum);
	}
	if (n == 'd' || n == 'i')
		return (ft_putnbr_fd(va_arg(aux, int)));
	if (n == 'u')
		return (ft_putnbr_u(va_arg(aux, unsigned int)));
	if (n == 'x')
		return (ft_putnbr_x(va_arg(aux, unsigned int), "0123456789abcdef"));
	if (n == 'X')
		return (ft_putnbr_x(va_arg(aux, unsigned int), "0123456789ABCDEF"));
	return (0);
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
		if (base[index] == '%' && ft_strchr("cspdiuxX%", base[index + 1]))
		{
			sum += ft_printf_define(aux, base[index + 1]);
			index++;
		}
		else
			sum += ft_putchar_fd(base[index], 1);
		index++;
	}
	va_end(aux);
	return (sum);
}
