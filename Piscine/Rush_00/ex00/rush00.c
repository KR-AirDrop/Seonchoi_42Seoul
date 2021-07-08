/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhalee <junhalee@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:20:42 by junhalee          #+#    #+#             */
/*   Updated: 2020/10/18 22:18:02 by junhalee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x);

void	abc(int a, int b, int x, int y)
{
	if ((b == 1 && a == x) || (a == x && b == y) ||
			(a == 1 && b == 1) || (b == y && a == 1))
		ft_putchar('o');
	else if (a > 1 && b > 1 && a < x && b < y)
		ft_putchar(' ');
	else if ((x > a && a > 1 && b == 1) || (x > a && a > 1 && b == y))
		ft_putchar('-');
	else
		ft_putchar('|');
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
