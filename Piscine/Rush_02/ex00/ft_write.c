/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:03:41 by seonchoi          #+#    #+#             */
/*   Updated: 2020/11/01 22:16:27 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	g_first = 0;

void	ft_write(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	if (g_first == 1)
		write(1, " ", 1);
	g_first = 1;
	while (str[i] != ':' && str[i])
		i++;
	i++;
	while (str[i] && str[i] != '\n')
	{
		if (str[i] == ' ' || str[i] == '\t')
			i++;
		else
		{
			if ((str[i - 1] == ' ' || str[i - 1] == '\t') && flag == 1)
				write(1, " ", 1);
			write(1, &str[i], 1);
			flag = 1;
			i++;
		}
	}
}
