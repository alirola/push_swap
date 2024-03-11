/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:49:54 by alirola-          #+#    #+#             */
/*   Updated: 2024/03/11 19:05:03 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_data *data)
{
	swap(data, 'a', 1);
}

void	sort_3(t_data *data)
{
	t_list	*a;

	a = data->lst_a;
	if (a->value < a->next->value && a->next->value > a->next->next->value)
	{
		r_rotate(data, 'a', 1);
		a = data->lst_a;
		if (a->next->value < a->value)
			swap(data, 'a', 1);
	}
	else if (a->value > a->next->value && a->value > a->next->next->value)
	{
		rotate(data, 'a', 1);
		a = data->lst_a;
		if (a->next->value < a->value)
			swap(data, 'a', 1);
	}
	else if (a->value > a->next->value && a->value < a->next->next->value)
		swap(data, 'a', 1);
}

void	sort_all(t_data *data)
{
	while (ft_lstsize(data->lst_a) > 3)
		push (data, 'b', 1);
	sort_3(data);
	while (data->lst_b != NULL)
	{
		position(data);
		reset_t_position(data);
		t_position(data, NULL, NULL);
		movement(data);
	}
	final_movement(data);
}

void	select_algorithm(t_data *data)
{
	if (ft_lstsize(data->lst_a) == 2)
		sort_2(data);
	else if (ft_lstsize(data->lst_a) == 3)
		sort_3(data);
	else
		sort_all(data);
}
