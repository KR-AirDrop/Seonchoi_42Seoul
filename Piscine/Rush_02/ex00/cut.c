/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cut.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:29:53 by seonchoi          #+#    #+#             */
/*   Updated: 2020/11/01 23:27:29 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	insert(char *dest, char *src, int start_idx, int *idx)
{
	int i;

	i = 0;
	while (i < 4)
		dest[i++] = '0';
	i = start_idx;
	while (i < 3)
	{
		dest[i] = src[*idx];
		i++;
		*idx = *idx + 1;
	}
	dest[i] = '\0';
}

void	case_by_module(char *dest, char *src, int *idx, int module)
{
	if (module == 0)
		insert(dest, src, 0, idx);
	if (module == 1)
		insert(dest, src, 2, idx);
	if (module == 2)
		insert(dest, src, 1, idx);
}

void	ft_case(char *arr, int *count, char *buf)
{
	if (ft_atoi(arr) != 0)
		ft_unit(buf, count);
	else
		*count = *count - 1;
}

void	cut(char *src, int count, char *buf, int module)
{
	char	arr[4];
	int		j[3];

	j[0] = 0;
	j[1] = 1;
	j[2] = count;
	case_by_module(arr, src, &j[0], module);
	if (count == 1 && ft_atoi(arr) == 0)
		ft_write(ft_value(buf, "0"));
	else
	{
		ft_three(buf, ft_atoi(arr));
		ft_case(arr, &count, buf);
		while (j[1]++ <= j[2])
		{
			insert(arr, src, 0, &j[0]);
			ft_three(buf, ft_atoi(arr));
			ft_case(arr, &count, buf);
		}
	}
}
