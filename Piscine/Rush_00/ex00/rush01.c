/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 18:22:20 by seonchoi          #+#    #+#             */
/*   Updated: 2020/10/18 22:29:18 by junhalee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x);

void	abc(int a, int b, int x, int y)
{
	if ((a == 1 && b == 1) || (a == x && b == y))
		ft_putchar('/');
	else if (a > 1 && b > 1 && a < x && b < y)
		ft_putchar(' ');
	else if ((a == 1 && b == y) || (a == x && b == 1))
		ft_putchar('\\');
	else
		ft_putchar('*');
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
