/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/03 15:21:39 by wbeets            #+#    #+#             */
/*   Updated: 2013/12/06 11:05:56 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_next_line(int const fd, char ** line)
{
	int		ret_readbuff;
	int		ret_read;

	ret_read = 1;
	*line = ft_strnew(BUFF_SIZE + 1);
	while ((ret_readbuff = readbuff(line)) == 0 && ret_read != 0)
	{
		*line = ft_strnew(BUFF_SIZE + 1);
		ret_read = read (fd, *line, BUFF_SIZE);
	}
	if (ret_read > 0)
		return (1);
	return (ret_read);
}

int		readbuff(char **line)
{
	static char		*str = "";
	size_t			i;

	str = ft_strjoin(str, *line);
	free(*line);
	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	if (str[i] == '\n')
	{
		*line = ft_strsub(str, 0, i);
		ft_memmove(str, str + i + 1, ft_strlen(str) - i + 1);
		return (1);
	}
	return (0);
}
