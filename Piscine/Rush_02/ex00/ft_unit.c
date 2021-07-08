/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:58:22 by seonchoi          #+#    #+#             */
/*   Updated: 2020/11/01 18:59:27 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_unit(char *buf, int *count)
{
	int		i;
	char	unit[*count * 3 - 1];

	unit[0] = '1';
	i = 1;
	while (i < *count * 3 - 2)
	{
		unit[i] = '0';
		i++;
	}
	unit[i] = '\0';
	if (unit[1])
	{
		ft_write(ft_value(buf, unit));
		*count = *count - 1;
	}
}
