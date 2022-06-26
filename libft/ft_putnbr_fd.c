/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernanda <fernanda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:51:28 by fernanda          #+#    #+#             */
/*   Updated: 2022/05/20 16:35:07 by fernanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	nbr;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	if (n > 9)
		ft_putnbr_fd((n / 10), fd);
	nbr = n % 10 + '0';
	write(fd, &nbr, 1);
}

/*int main(void)
{
	int	n;
	int	fd;

	n = -2639;
	fd = 1;
	ft_putnbr_fd(n, fd);
	return (0);
}*/
