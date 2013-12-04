/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 17:55:18 by wbeets            #+#    #+#             */
/*   Updated: 2013/11/23 12:45:36 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;

	if ((mem = (char*)malloc(size * sizeof(mem))))
	{
		ft_memset(mem, 0 , size);
		return (mem);
	}
	return (NULL);
}
