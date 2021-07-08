/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 13:21:46 by seonchoi          #+#    #+#             */
/*   Updated: 2020/10/21 10:27:01 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int *num)
{
	char word[7];

	word[0] = num[0] / 10 + '0';
	word[1] = num[0] % 10 + '0';
	word[2] = ' ';
	word[3] = num[1] / 10 + '0';
	word[4] = num[1] % 10 + '0';
	word[5] = ',';
	word[6] = ' ';
	if (num[0] == 98 && num[1] == 99)
		write(1, &word, 5);
	else
		write(1, &word, 7);
}

void	ft_print_comb2(void)
{
	int num[2];

	num[0] = 0;
	while (num[0] < 99)
	{
		num[1] = num[0] + 1;
		while (num[1] <= 99)
		{
			ft_write(num);
			num[1]++;
		}
		num[0]++;
	}
}
