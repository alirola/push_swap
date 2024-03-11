/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:03:24 by alirola-          #+#    #+#             */
/*   Updated: 2024/03/11 18:23:49 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(int))
{
	t_list	*new;

	new = lst;
	if (lst == 0 || del == 0)
		return ;
	del(lst->value);
	del(lst->index);
	del(lst->position);
	del(lst->t_position);
	del(lst->cost_a);
	del(lst->cost_b);
	del(lst->t_cost);
	lst = new->next;
	free(new);
}
