/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_outs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:36:21 by ferncarv          #+#    #+#             */
/*   Updated: 2022/06/22 15:37:54 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_out_c(char c)
{
    ft_putchar (1, &c, 1);
    return (1);
}

int ft_out_s(char *s)
{
    int len;

    if (!s)
        return (write (1, "(null)", 6);
    len = ft_strlen(s);
    write (1, s, len);
    return (len);
}

int ft_out_dec(va_list aux)
{
    int num;
	int	aux1;

	aux1 = ft_out_s;
	
    num = va_args(aux, int);
    ft_putnbr_fd(num, 1);
    if (num < 0)
	
		return (0);
}

