/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:45:09 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/16 14:30:57 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_push_swap.h"

int	main(int argv, char **argc)
{
	t_stack	*stack1;
	t_stack	*stack2;
	t_control control;

	if (argv < 2)
		return (0);

	if (!is_valid(argv, argc, &control))
		output_error(1);
	stack1 = init_stack(control.max);
	if (!stack1)
		return (0);
	stack2 = init_stack(control.max);
	if (!stack2)
	{
		free (stack1);
		return (0);
	}
	fill_stack(stack1, control.arr);
	handle_cases(stack1, stack2);
	clean(stack1);
	clean(stack2);
	free_char_arr(control.arr, arr_len(control.arr));
	return (0);
}
