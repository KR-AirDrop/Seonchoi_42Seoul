/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 13:21:32 by seonchoi          #+#    #+#             */
/*   Updated: 2021/02/03 20:25:27 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*udst;
	unsigned char	*usrc;

	i = -1;
	if (dst == NULL && src == NULL)
		return (NULL);
	udst = (unsigned char *)dst;
	usrc = (unsigned char *)src;
	if (usrc < udst)
		while (len-- > 0)
			udst[len] = usrc[len];
	else
		while (++i < len)
			udst[i] = usrc[i];
	return (udst);
}
