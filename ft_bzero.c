/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:54:53 by wbeets            #+#    #+#             */
/*   Updated: 2013/12/04 12:28:44 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	size_t		i;
	unsigned char		*ptr;

	ptr = (unsigned char*)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = '\0';
		i++;
	}
}
