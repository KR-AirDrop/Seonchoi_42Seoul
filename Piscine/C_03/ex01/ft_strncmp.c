/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:11:15 by seonchoi          #+#    #+#             */
/*   Updated: 2020/10/26 17:24:20 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int a;

	a = 0;
	if (n == 0)
		return (0);
	while (s1[a] && s2[a] && a < n)
	{
		if (s1[a] == s2[a])
			a++;
		else
			return (s1[a] - s2[a]);
	}
	return (0);
}
