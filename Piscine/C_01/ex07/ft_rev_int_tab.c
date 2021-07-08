/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 12:26:40 by seonchoi          #+#    #+#             */
/*   Updated: 2020/10/24 09:54:31 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int count;
	int save;

	count = 0;
	while (count < size / 2)
	{
		save = tab[size - count - 1];
		tab[size - count - 1] = tab[count];
		tab[count] = save;
		count++;
	}
}
