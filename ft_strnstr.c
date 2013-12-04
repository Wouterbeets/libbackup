/*e************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 10:13:23 by wbeets            #+#    #+#             */
/*   Updated: 2013/12/04 11:24:43 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	length;

	length = ft_strlen(s2);
	if (!*s2)
		return ((char *)s1);
	if (length <= n)
	{
		while (*s1 && n - length + 1 > 0)
		{
			if (*s1 == *s2)
			{
				if (ft_memcmp((char *)s1, (char *)s2, length) == 0)
					return ((char *)s1);
			}
			s1++;
			n--;
		}
	}
	return (NULL);
}
