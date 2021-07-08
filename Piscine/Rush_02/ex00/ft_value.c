/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_value.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:50:56 by seonchoi          #+#    #+#             */
/*   Updated: 2020/11/01 19:26:21 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	*ft_value(char *buf, char *key)
{
	char *str;
	char *ptr;
	char *save;

	ptr = ft_strstr(buf, key);
	str = malloc(sizeof(char) * 50);
	save = str;
	while (*ptr != '\n' && *ptr)
	{
		*str = *ptr;
		ptr++;
		str++;
	}
	*str = '\0';
	return (save);
}
