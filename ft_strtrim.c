/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 10:57:11 by wbeets            #+#    #+#             */
/*   Updated: 2013/12/04 11:01:17 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*newmem;
	char	*tmp;
	char	*pend;
	size_t	i;

	tmp = ft_strnew(ft_strlen(s) + 1);
	pend = (char *)s + (ft_strlen(s) - 1);
	i = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	while (*pend == ' ' || *pend == '\n' || *pend == '\t')
		pend--;
	while (s <= pend)
	{
		tmp[i] = *s;
		i++;
		s++;
	}
	tmp[i] = '\0';
	newmem = ft_strnew(ft_strlen(tmp));
	ft_strcpy(newmem, tmp);
	ft_strdel(&tmp);
	return (newmem);
}
