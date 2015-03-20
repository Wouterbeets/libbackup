/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 11:56:41 by wbeets            #+#    #+#             */
/*   Updated: 2015/03/20 11:56:41 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ispos(int n, char *nb, char *rnb)
{
	int		i;
	int		j;

	i = 0;
	while (n)
	{
		nb[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	nb[i] = 0;
	i = 0;
	j = ft_strlen(nb) - 1;
	while (j >= 0)
	{
		rnb[i] = nb[j];
		i++;
		j--;
	}
	rnb[i] = 0;
	free(nb);
	return (rnb);
}

static char		*isneg(int n, char *nb, char *rnb)
{
	int		i;
	int		j;

	i = 0;
	n = n * -1;
	while (n)
	{
		nb[i] = n % 10 + 48;
		n = n / 10;
		i++;
	}
	nb[i++] = '-';
	nb[i++] = 0;
	i = 0;
	j = ft_strlen(nb);
	while (j >= 0)
	{
		rnb[i] = nb[--j];
		i++;
	}
	rnb[i] = 0;
	free(nb);
	return (rnb);
}

char			*ft_itoa(int n)
{
	char	*nb;
	char	*rnb;

	nb = (char *)malloc(sizeof(char) * 12);
	rnb = (char *)malloc(sizeof(char) * 12);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n >= 0 && n < 10)
	{
		nb[0] = n + 48;
		nb[1] = '\0';
		free(rnb);
		return (nb);
	}
	if (n > 9)
		return (ispos(n, nb, rnb));
	if (n < 0)
		return (isneg(n, nb, rnb));
	return (NULL);
}
