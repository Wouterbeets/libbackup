/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 09:03:21 by wbeets            #+#    #+#             */
/*   Updated: 2013/12/04 11:39:37 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*newmem;

	newmem = (char *)malloc(size + 1);
	if (newmem == NULL)
		return (NULL);
	ft_bzero(newmem, size + 1);
	return (newmem);
}
