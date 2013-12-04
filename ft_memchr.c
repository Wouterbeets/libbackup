/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 09:46:00 by wbeets            #+#    #+#             */
/*   Updated: 2013/12/04 11:55:41 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char		*ptr;

	ptr = (const char*)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void*)&ptr[i]);
		i++;
	}
	return (0);
}
