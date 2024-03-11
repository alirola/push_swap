/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:40:42 by alirola-          #+#    #+#             */
/*   Updated: 2024/03/11 18:28:26 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int value)
{
	t_list	*new_list;

	new_list = (t_list *)malloc(sizeof(t_list));
	if (new_list == 0)
		return (NULL);
	new_list->value = value;
	new_list->index = 0;
	new_list->position = 0;
	new_list->t_position = 0;
	new_list->cost_a = 0;
	new_list->cost_b = 0;
	new_list->t_cost = 0;
	new_list->next = NULL;
	return (new_list);
}
