/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_and_assign.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:12:34 by alirola-          #+#    #+#             */
/*   Updated: 2024/03/11 19:02:12 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_and_assign(t_data *data)
{
	int		i;
	t_list	*aux;
	t_list	*min;
	int		min_value;

	i = -1;
	while (data->arg[++i] != NULL)
		ft_lstadd_back(&data->lst_a, ft_lstnew(ft_atoi(data->arg[i])));
	i = 0;
	while (++i <= ft_lstsize(data->lst_a))
	{
		aux = data->lst_a;
		min_value = INT_MAX;
		while (aux != NULL)
		{
			if ((aux->index == 0) && (aux->value <= min_value))
			{
				min = aux;
				min_value = min->value;
			}
			aux = aux->next;
		}
		min->index = i;
	}
}
