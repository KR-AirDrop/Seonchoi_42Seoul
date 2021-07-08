/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:26:41 by seonchoi          #+#    #+#             */
/*   Updated: 2020/10/18 22:50:13 by junhalee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x);

void	abc(int a, int b, int x, int y)
{
	if ((a == 1 && b == 1) || (a == 1 && b == y))
		ft_putchar('A');
	else if (a > 1 && b > 1 && a < x && b < y)
		ft_putchar(' ');
	else if ((a == x && b == y) || (a == x && b == 1))
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int a;
	int b;

	b = 1;
	if (x > 281 || y > 75)
		write(1, "a", 1);
	else
	{
		while (b <= y)
		{
			a = 1;
			while (a <= x)
			{
				abc(a, b, x, y);
				a++;
			}
			ft_putchar('\n');
			b++;
		}
	}
}
