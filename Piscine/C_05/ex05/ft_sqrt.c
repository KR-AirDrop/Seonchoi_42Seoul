/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 16:47:51 by seonchoi          #+#    #+#             */
/*   Updated: 2020/10/28 20:09:15 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb == 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
