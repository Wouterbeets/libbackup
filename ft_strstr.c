/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:52:40 by wbeets            #+#    #+#             */
/*   Updated: 2013/11/21 15:58:16 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s2[i] == '\0')
		return (char*)(s1);
	while (s1[i] != '\0')
	{
		while (s1[i] == s2[j])
		{
			j++;
			i++;
			if (s2[j] == '\0')
				return (char*)&(s1[i-ft_strlen(s2)]);
		}
		j = 0;
		i++;
	}
	return (0);
}
