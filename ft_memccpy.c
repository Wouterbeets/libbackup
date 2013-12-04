/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 12:07:58 by wbeets            #+#    #+#             */
/*   Updated: 2013/11/27 10:06:37 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t size)
{
	size_t		i;
	unsigned char		*ptr1;
	unsigned char		*ptr2;

	ptr1 = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	while (i < size && ptr2[i] != (unsigned char)c)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	if (ptr2[i] == (unsigned char)c && i != size)
	{
		ptr1[i] = ptr2[i];
		return (&ptr1[i + 1]);
	}
	return (NULL);
}
