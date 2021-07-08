/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:09:43 by seonchoi          #+#    #+#             */
/*   Updated: 2020/11/02 19:05:47 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*num_arr;

	i = 0;
	if (max - min <= 0)
	{
		*range = NULL;
		return (0);
	}
	num_arr = malloc(sizeof(int) * (max - min));
	if (!num_arr)
		return (-1);
	while (i < max - min)
	{
		num_arr[i] = min + i;
		i++;
	}
	*range = num_arr;
	return (max - min);
}
