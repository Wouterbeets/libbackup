/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 19:30:23 by wbeets            #+#    #+#             */
/*   Updated: 2013/11/26 19:32:32 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	if (s && f)
	{
		int		i;
		int		j;
		char	*nstr;

		j = ft_strlen((char*)s);
		i = 0;
		nstr = (char*)malloc(j * sizeof(nstr));
		while (s[i] != '\0')
		{
			nstr[i] = f(s[i], i);
			i++;
		}
		return (nstr);
	}
	return (NULL);
}

