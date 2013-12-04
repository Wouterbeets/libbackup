/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 17:44:32 by wbeets            #+#    #+#             */
/*   Updated: 2013/11/22 17:46:31 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int		nbr_print;

	if (n < 0)
	{
		ft_putchar('-');
		if (n == -2147483648)
			ft_putstr("2147483648");
		else
			ft_putnbr(-n);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar('0' + n);
	else
	{
		nbr_print = n % 10;
		ft_putnbr(n / 10);
		ft_putchar('0' + nbr_print);
	}
}
