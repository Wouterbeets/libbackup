/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/04 14:30:20 by wbeets            #+#    #+#             */
/*   Updated: 2013/12/08 18:12:37 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main()
{
	int		fd;
	char	*line;
	int		ret;
	int		i;

	fd = open("file.txt", O_RDONLY);
	while ((ret = get_next_line(fd, &line)) > 0)
	{
		ft_putendl(line);
		free(line);
		i++;
	}
	ft_putnbr(ret);
	ft_putnbr(i);
	return (0);
}
