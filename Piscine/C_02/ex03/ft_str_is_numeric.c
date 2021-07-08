/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 10:37:51 by seonchoi          #+#    #+#             */
/*   Updated: 2020/10/26 12:12:16 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < '0' || str[a] > '9')
			return (0);
		a++;
	}
	return (1);
}
