/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 14:43:23 by seonchoi          #+#    #+#             */
/*   Updated: 2020/11/02 14:33:05 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int	*num_arr;

	i = 0;
	if (max - min <= 0)
		return (NULL);
	num_arr = malloc(sizeof(int) * (max - min));
	if (!num_arr)
		return (NULL);
	while (i < max - min)
	{
		num_arr[i] = min + i;
		i++;
	}
	return (num_arr);
}
