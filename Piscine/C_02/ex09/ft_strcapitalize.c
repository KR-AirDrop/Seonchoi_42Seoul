/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 10:48:11 by seonchoi          #+#    #+#             */
/*   Updated: 2020/10/26 12:32:54 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
			str[a] = str[a] + 32;
		a++;
	}
	return (str);
}

char	*ft_strcheck(char *str, int a)
{
	if (a == 0)
		str[a] = str[a] - 32;
	else if ((str[a - 1] >= 'a' && str[a - 1] <= 'z')
		|| (str[a - 1] >= 'A' && str[a - 1] <= 'Z')
		|| (str[a - 1] >= '0' && str[a - 1] <= '9'))
		return (str);
	else
		str[a] = str[a] - 32;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int a;

	a = 0;
	ft_strlowcase(str);
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			ft_strcheck(str, a);
			a++;
		}
		else
			a++;
	}
	return (str);
}
