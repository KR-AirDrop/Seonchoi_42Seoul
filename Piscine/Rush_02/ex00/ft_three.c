/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:03:12 by seonchoi          #+#    #+#             */
/*   Updated: 2020/11/01 21:52:42 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_three(char *buf, int nb)
{
	int num[3];

	num[0] = (nb - nb % 100) / 100;
	num[1] = nb % 100;
	num[2] = 0;
	if (num[1] > 20)
	{
		num[2] = num[1] % 10;
		num[1] = num[1] - num[2];
	}
	if (num[0] != 0)
	{
		ft_write(ft_value(buf, ft_itoa(num[0])));
		ft_write(ft_value(buf, "100"));
	}
	if (num[1] != 0)
	{
		ft_write(ft_value(buf, ft_itoa(num[1])));
	}
	if (num[2] != 0)
		ft_write(ft_value(buf, ft_itoa(num[2])));
}
