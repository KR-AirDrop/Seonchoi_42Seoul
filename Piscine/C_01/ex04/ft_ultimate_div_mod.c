/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 12:14:49 by seonchoi          #+#    #+#             */
/*   Updated: 2020/10/21 13:03:48 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int a_save;
	int b_save;

	a_save = *a;
	b_save = *b;
	*a = a_save / b_save;
	*b = a_save % b_save;
}
