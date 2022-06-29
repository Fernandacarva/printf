/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:26:21 by ferncarv          #+#    #+#             */
/*   Updated: 2022/05/17 17:49:54 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *base, ...);
int ft_out_c(va_arg base, char c);
int ft_out_s(va_arg base, char *s);
int	ft_out_d(va_list aux);
int	ft_out_i(va_list(aux);
int	ft_printf_hex_upper(va_list aux);
#endif
