/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:46:07 by alirola-          #+#    #+#             */
/*   Updated: 2024/03/11 19:03:17 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	position(t_data *data)
{
	t_list	*aux;
	int		i;

	aux = data->lst_b;
	i = 0;
	while (++i <= ft_lstsize(data->lst_b))
	{
		aux->position = i;
		aux = aux->next;
	}
	aux = data->lst_a;
	i = 0;
	while (++i <= ft_lstsize(data->lst_a))
	{
		aux->position = i;
		aux = aux->next;
	}
}

void	reset_t_position(t_data *data)
{
	t_list	*b;

	b = data->lst_b;
	while (b != NULL)
	{
		if (b->t_position != 0)
			b->t_position = 0;
		b = b->next;
	}
}

void	t_position(t_data *data, t_list *a, t_list *b)
{
	t_list	*max;
	t_list	*t;

	b = data->lst_b;
	while (b != NULL)
	{
		a = data->lst_a;
		max = NULL;
		t = NULL;
		while (a != NULL)
		{
			if (max == NULL || a->index > max->index)
				max = a;
			if (b->index < a->index && (t == NULL || a->index < t->index))
				t = a;
			a = a->next;
		}
		if (t == NULL && check_order(data) == 0)
			b->t_position = 1;
		else if (t == NULL && check_order(data) == 1)
			b->t_position = max->position + 1;
		else
			b->t_position = t->position;
		b = b->next;
	}
}
