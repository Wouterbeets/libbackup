/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 18:28:23 by wbeets            #+#    #+#             */
/*   Updated: 2013/12/04 11:36:43 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	nb;

	sign = 1;
	nb = 0;
	while (*str == ' ' || *str == '\n' || *str == '\v'
			|| *str == '\t' || *str == '\r' || *str == '\f')
		++str;
	if (*str == '-')
	{
		sign = -1;
		++str;
	}
	else if (*str == '+')
		++str;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10;
		nb = nb + (*str - '0');
		++str;
	}
	return (sign * nb);
}
