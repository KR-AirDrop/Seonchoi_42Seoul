/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:49:11 by seonchoi          #+#    #+#             */
/*   Updated: 2020/11/01 18:49:12 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	*ft_itoa(int nb)
{
	char *itoa;
	char *save;

	itoa = malloc(sizeof(char) * 5);
	save = itoa;
	if (nb < 10)
		*itoa = nb + '0';
	else
	{
		*itoa = nb / 10 + '0';
		itoa++;
		*itoa = nb % 10 + '0';
	}
	return (save);
}
