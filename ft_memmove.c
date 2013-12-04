/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 13:11:01 by wbeets            #+#    #+#             */
/*   Updated: 2013/12/04 11:26:39 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char	*copy;
	char	*p1;
	size_t	i;

	copy = (char *)malloc(sizeof(char)*n);
	p1 = (char *)s1;
	i = 0;
	while (i < n)
	{
		copy[i] = ((char *)s2)[i];
		i++;
	}
	while (n > 0)
	{
		n--;
		p1[n] = copy[n];
	}
	return (s1);
}
