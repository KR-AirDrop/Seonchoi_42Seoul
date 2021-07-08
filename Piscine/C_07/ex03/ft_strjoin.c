/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:16:22 by seonchoi          #+#    #+#             */
/*   Updated: 2020/11/02 16:40:52 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*save_out(int size, char **strs, char *sep, char *out)
{
	int		i;
	int		j;
	int		k;

	j = 0;
	k = 0;
	while (j < size)
	{
		i = -1;
		while (strs[j][++i])
			out[k++] = strs[j][i];
		if (j < size - 1)
		{
			i = -1;
			while (sep[++i])
				out[k++] = sep[i];
		}
		j++;
	}
	out[k] = '\0';
	return (out);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*out;
	int		total;
	int		j;

	total = 0;
	j = 0;
	while (j < size)
	{
		total = total + ft_strlen(strs[j]) + ft_strlen(sep) + 1;
		j++;
	}
	if (!(out = malloc(sizeof(char) * total)))
		return (NULL);
	if (size == 0)
		return (out);
	out = save_out(size, strs, sep, out);
	return (out);
}
