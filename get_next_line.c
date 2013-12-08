/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/03 15:21:39 by wbeets            #+#    #+#             */
/*   Updated: 2013/12/08 17:55:53 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int const fd, char ** line)
{
	static char		*buf = "";
	size_t			i;
	int				ret;
	char			*str;

	if (!line || fd < 0)
		return (-1);
	i = 0;
	ret = 1;
	if (buf[0] == '\0')
		buf = ft_strnew(0);
	while (ret > 0)
	{
		if ((str = ft_strchr(buf, '\n')) != NULL)
		{
			*str = '\0';
			*line = ft_strdup(buf);
			ft_memmove(buf, str + 1, ft_strlen(str + 1) + 1);
			return (1);
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
	tmp[*ret] = '\0';
	tmp2 = buf;
	buf = ft_strjoin(buf, tmp);
	ft_strdel(&tmp2);
	return (buf);
}
