/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:52:39 by seonchoi          #+#    #+#             */
/*   Updated: 2020/11/02 14:12:47 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(int argc, char **argv)
{
	char	*buf;
	char	*str;
	char	*ptr;
	int		nb;
	int		count[2];

	if (argc == 1 || argc > 3)
		return (0);
	if (!check(input(argc, argv)))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	count[0] = ft_strlen(input(argc, argv)) / 3;
	count[1] = ft_strlen(input(argc, argv)) % 3;
	buf = ft_read(dict(argc, argv));
	if (!ft_strcmp(buf, "error"))
		return (0);
	if (ft_strlen(input(argc, argv)) % 3 != 0)
		count[0]++;
	cut(input(argc, argv), count[0], buf, count[1]);
	free(buf);
	free(str);
	write(1, "\n", 1);
	return (0);
}
