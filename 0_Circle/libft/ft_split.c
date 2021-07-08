/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:41:59 by seonchoi          #+#    #+#             */
/*   Updated: 2021/07/08 17:17:55 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_count(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			i++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_free(char **temp)
{
	unsigned int	i;

	i = 0;
	while (temp[i] != 0)
		free(temp[i++]);
	free(temp);
	return (0);
}

void	ft_word(char **idx, unsigned int *len, char c)
{
	unsigned int	i;

	*idx += *len;
	*len = 0;
	i = 0;
	while (**idx != '\0' && **idx == c)
		(*idx)++;
	while ((*idx)[i] != '\0' && (*idx)[i] != c)
	{
		(*len)++;
		i++;
	}
	return ;
}

char	**ft_split(char const *s, char c)
{
	char			**temp;
	char			*idx;
	unsigned int	len;
	unsigned int	word_num;
	unsigned int	i;

	if (!s)
		return (0);
	word_num = ft_word_count(s, c);
	temp = (char **)malloc(sizeof(char *) * (word_num + 1));
	if (!temp)
		return (0);
	idx = (char *)s;
	len = 0;
	i = -1;
	while (++i < word_num)
	{
		ft_word(&idx, &len, c);
		temp[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!temp[i])
			return (ft_free(temp));
		ft_strlcpy(temp[i], idx, len + 1);
	}
	temp[i] = 0;
	return (temp);
}
