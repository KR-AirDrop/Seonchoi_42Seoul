/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 21:18:28 by seonchoi          #+#    #+#             */
/*   Updated: 2021/07/06 15:48:58 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	put_num(int *g_dirx, int *g_diry)
{
	g_dirx[0] = -1;
	g_dirx[1] = 0;
	g_dirx[2] = 1;
	g_dirx[3] = 0;
	g_dirx[4] = -1;
	g_dirx[5] = -1;
	g_dirx[6] = 1;
	g_dirx[7] = 1;
	g_diry[0] = 0;
	g_diry[1] = 1;
	g_diry[2] = 0;
	g_diry[3] = -1;
	g_diry[4] = -1;
	g_diry[5] = 1;
	g_diry[6] = 1;
	g_diry[7] = -1;
}

int	map_checker2(t_info *info, char **test_map)
{
	if (info->is_zero == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (info->player_num != 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (info->p == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	free_map(test_map, 103);
	return (1);
}

void	init_put_num(t_info *info)
{
	info->is_zero = 0;
	info->p = 0;
}
