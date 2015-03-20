/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 11:57:18 by wbeets            #+#    #+#             */
/*   Updated: 2015/03/20 11:57:18 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		re;

	re = 0;
	if (n == 0)
		return (0);
	while (!(re = *(unsigned char *)s1 - *(unsigned char *)s2) && *s2 && --n)
	{
		++s1;
		++s2;
	}
	if (re < 0)
		re = -1;
	else if (re > 0)
		re = 1;
	return (re);
}
