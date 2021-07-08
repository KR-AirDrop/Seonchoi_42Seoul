/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 12:36:31 by seonchoi          #+#    #+#             */
/*   Updated: 2020/10/26 12:39:42 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	len;

	a = 0;
	while ((src[a]) && a + 1 < size)
	{
		dest[a] = src[a];
		a++;
	}
	if (size > 0)
		dest[a] = '\0';
	len = 0;
	while (src[len])
		len++;
	return (len);
}
