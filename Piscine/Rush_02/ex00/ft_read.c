/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:45:52 by seonchoi          #+#    #+#             */
/*   Updated: 2020/11/01 23:31:12 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char		*ft_read(char *file)
{
	int		fd;
	char	*buf;
	int		len;

	len = BUFFSIZE;
	fd = open(file, O_RDONLY);
	if (fd != 3)
	{
		write(1, "Dict Error\n", 11);
		return ("error");
	}
	buf = malloc(sizeof(char) * len);
	read(fd, buf, len);
	return (buf);
}
