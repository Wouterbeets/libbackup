/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 09:40:09 by wbeets            #+#    #+#             */
/*   Updated: 2013/12/04 12:26:15 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbstr_count(char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != c && *s != '\0')
			i++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (i);
}

static size_t	ft_strlenc(char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	char	*p;
	char	**strtab;
	char	**pstrtab;

	i = 0;
	p = (char *)s;
	strtab = (char **)malloc(sizeof(char *) * (ft_nbstr_count(p, c) + 1));
	if (strtab == NULL)
		return (NULL);
	pstrtab = strtab;
	while (i < ft_nbstr_count((char *)s, c))
	{
		while (*p == c)
			p++;
		*pstrtab = ft_strnew(ft_strlenc(p, c) + 1);
		memcpy(*pstrtab, p, ft_strlenc(p, c));
		while (*p != c)
			p++;
		pstrtab++;
		i++;
	}
	*pstrtab = NULL;
	return (strtab);
}
