/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 11:57:25 by wbeets            #+#    #+#             */
/*   Updated: 2015/03/20 11:57:25 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*tmp;

	if (s)
	{
		i = 0;
		j = ft_strlen((char *)s) - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		tmp = (char *)malloc(sizeof(char) * (j - i + 1));
		while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
			j--;
		k = 0;
		while (i <= j)
		{
			tmp[k] = s[i];
			i++;
			k++;
		}
		tmp[k] = '\0';
		return (tmp);
	}
	return (NULL);
}
