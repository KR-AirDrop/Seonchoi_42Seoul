/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 13:20:54 by seonchoi          #+#    #+#             */
/*   Updated: 2020/10/27 15:12:13 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int sol;

	sol = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		while (power-- > 1)
			sol = sol * nb;
	return (sol);
}
