/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhalee <junhalee@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 14:29:48 by junhalee          #+#    #+#             */
/*   Updated: 2020/10/20 08:29:00 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x);

void	abc(int a, int b, int x, int y)
{
	if ((a == 1 && b == 1) || (a == x && b == y))
		ft_putchar('A');
	else if (a > 1 && b > 1 && a < x && b < y)
		ft_putchar(' ');
	else if ((a == 1 && b == y) || (a == x && b == 1))
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int a;
	int b;

	if (x > 281 || y > 75)
		write(1, "a", 1);
	else
	{
		b = 1;
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
