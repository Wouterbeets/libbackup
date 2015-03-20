/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 11:57:24 by wbeets            #+#    #+#             */
/*   Updated: 2015/03/20 11:57:24 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	if (s && (int)len > -1)
	{
		i = 0;
		str = (char *)malloc(sizeof(s));
		while (len > 0)
		{
			str[i] = s[start];
			i++;
			start++;
			len--;
		}
		return (str);
	}
	return (0);
}
