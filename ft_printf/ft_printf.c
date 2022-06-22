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

int	ft_printf(const char *base, ...)
{
	va_list	aux;
	int		index;
	int		sum;

	index = 0;
	sum = 0;
	va_start(aux, base);
	while (base[index])
	{
		if (base[index] == '%' && ft_strchr("cspdiuxX%", base[index + 1]))
		{
			sum += ft_printf_first(base, index, aux);
			index++;
		}
		else
			ret += ft_putchar(base[index]);
		index++;
	}
	va_end(base);
	return (sum);
}
