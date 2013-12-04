/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:11:58 by wbeets            #+#    #+#             */
/*   Updated: 2013/12/04 12:22:23 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
		int		i;

	i = ft_strlen(s);
	while (i >= 0 && s[i] != (char)c)
	{
		i--;
	}
	if (s[i] == (char)c)
		return ((char*)&s[i]);
	return (NULL);
}
