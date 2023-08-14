/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerbek <eerbek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:57:18 by eerbek            #+#    #+#             */
/*   Updated: 2023/05/02 16:57:22 by eerbek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	err_msg(char *msg)
{
	ft_printf("%s", msg);
	exit (0);
}

int	mouse_hook(int mousecode, t_data *data)
{
	(void)mousecode;
	(void)data;
	err_msg("Exit Success");
	return (0);
}

int	exit_door(t_data *data)
{
	if (data->coin_collected == data->coin_count)
	{
		ft_printf("\n>>>>Toplam Hareket: %d\n", data->step_count);
		err_msg("FINISH");
	}
	else if (data->coin_collected != data->coin_count)
		return (1);
	return (0);
}
