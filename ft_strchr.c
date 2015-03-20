/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 11:57:05 by wbeets            #+#    #+#             */
/*   Updated: 2015/03/20 11:57:05 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != (char)c && s[i] != 0)
		i++;
	if (s[i] == 0 && s[i] != (char)c)
		return (NULL);
	else if (s[i] == (char)c)
		return ((char *)&s[i]);
	return ((char *)&s[i]);
}
