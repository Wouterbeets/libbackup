/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 11:55:57 by wbeets            #+#    #+#             */
/*   Updated: 2013/11/23 12:13:06 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		nbr_print;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
			ft_putstr_fd("2147483648", fd);
		else
			ft_putnbr_fd(-n, fd);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar_fd('0' + n, fd);
	else
	{
		nbr_print = n % 10;
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd('0' + nbr_print, fd);
	}
}
