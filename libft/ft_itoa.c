/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferncarv <ferncarv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:11:10 by fernanda          #+#    #+#             */
/*   Updated: 2022/06/06 14:04:10 by ferncarv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	*ft_continue(unsigned int count_digit, int n);
static void	ft_writenbr(int n, char *str);

char	*ft_itoa(int n)
{
	unsigned int	count_digit;
	unsigned int	aux;

	count_digit = 0;
	if (n < 0)
		aux = n * -1;
	else
		aux = n;
	while (aux != 0)
	{
		aux = aux / 10;
		count_digit++;
	}
	return (ft_continue(count_digit, n));
}

static void	*ft_continue(unsigned int count_digit, int n)
{
	char	*result;

	if (n < 0)
	{
		count_digit++;
		result = (char *)malloc(count_digit + 1);
	}
	else if (n == 0)
		return (result = ft_strdup("0"));
	else
		result = (char *)malloc(count_digit + 1);
	if (!result)
		return (NULL);
	ft_writenbr(n, result);
	result[count_digit + 1] = '\0';
	return (result);
}

static void	ft_writenbr(int n, char *str)
{
	char	nbr;

	if (n == -2147483648)
	{
		ft_strlcpy(str, "-2147483648", 12);
		return ;
	}
	if (n < 0)
	{
		ft_strlcpy(str, "-", 2);
		n = n * -1;
	}
	if (n < 10)
	{
		nbr = n + '0';
		ft_strlcat(str, &nbr, ft_strlen(str) + 1 + 1);
		return ;
	}
	else
		ft_writenbr(n / 10, str);
	ft_writenbr(n % 10, str);
}
