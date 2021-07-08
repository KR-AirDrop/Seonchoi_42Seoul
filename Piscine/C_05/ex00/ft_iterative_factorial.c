/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 12:06:16 by seonchoi          #+#    #+#             */
/*   Updated: 2020/10/28 16:28:25 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fac;

	fac = 1;
	if (nb < 0)
		return (0);
	while (nb >= 1)
	{
		fac = fac * nb;
		nb--;
	}
	return (fac);
}
