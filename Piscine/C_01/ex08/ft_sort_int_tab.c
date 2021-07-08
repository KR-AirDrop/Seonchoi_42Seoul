/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 12:34:15 by seonchoi          #+#    #+#             */
/*   Updated: 2020/10/21 12:42:05 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int count1;
	int count2;
	int save;

	count2 = 0;
	while (count2 <= size - 1)
	{
		count1 = 0;
		while (count1 <= size - 2)
		{
			if (tab[count1] > tab[count1 + 1])
			{
				save = tab[count1];
				tab[count1] = tab[count1 + 1];
				tab[count1 + 1] = save;
			}
			count1++;
		}
		count2++;
	}
}
