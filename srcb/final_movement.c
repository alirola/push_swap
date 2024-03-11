/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_movement.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:15:28 by alirola-          #+#    #+#             */
/*   Updated: 2024/03/11 19:02:24 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	final_movement(t_data *data)
{
	t_list	*a;
	int		mid;

	a = data->lst_a;
	mid = (ft_lstsize(a) / 2) + 1;
	while (a->index <= mid && a->index != 1)
	{
		r_rotate(data, 'a', 1);
		a = data->lst_a;
	}
	while (a->index > mid && a->index != 1)
	{
		rotate(data, 'a', 1);
		a = data->lst_a;
	}
}
