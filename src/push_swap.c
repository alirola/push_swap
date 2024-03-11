/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alirola- <alirola-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:46:32 by alirola-          #+#    #+#             */
/*   Updated: 2024/03/11 19:04:11 by alirola-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init_struct(t_data *data)
{
	data->lst_a = NULL;
	data->lst_b = NULL;
}

int	main(int argc, char **argv)
{
	t_data	*data;

	data = ft_calloc(1, sizeof(t_data));
	if (!data)
		exit (EXIT_FAILURE);
	init_struct (data);
	if (check_arguments (argc, argv, data) == 1)
		exit (EXIT_FAILURE);
	if (check_numbers(-1, 0, 0, data) == 1)
		exit (EXIT_FAILURE);
	fill_and_assign(data);
	if (check_order(data) == 0)
		exit (EXIT_FAILURE);
	select_algorithm(data);
	exit (EXIT_SUCCESS);
}