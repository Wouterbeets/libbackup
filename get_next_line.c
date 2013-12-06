/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/03 15:21:39 by wbeets            #+#    #+#             */
/*   Updated: 2013/12/06 18:34:24 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int const fd, char ** line)
{
	static char		*buf = "";
	size_t			i;
	int				ret;

	i = 0;
	ret = 1;
	if (buf[0] == '\0')
		buf = ft_strnew(1);
	while (ret > 0)
	{
		while (buf[i] != '\0')
		{
			if (buf[i] == '\n')
			{
				*line = ft_strsub(buf, 0, i);
				ft_memmove(buf, buf + i + 1, ft_strlen(buf) - i + 1);
				return (1);
			}
			i++;
		}
		buf = biggerbuf(fd, buf, &ret);
	}
	free(buf);
	return (ret);
}

char	*biggerbuf(int const fd, char *buf, int *ret)
{
	char	tmp[BUFF_SIZE + 1];
	char	*tmp2;

	*ret = read(fd, tmp, BUFF_SIZE);
	tmp2 = ft_strdup(buf);
	ft_strdel(&buf);
	buf = ft_strjoin(tmp2, tmp);
	ft_strdel(&tmp2);
	return (buf);
}
