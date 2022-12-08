/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:45:09 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/08 12:16:55 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_push_swap.h"

int	main(int argv, char **argc)
{
	t_stack *stack1;
	//t_stack *stack2;

	if (argv < 2)
		return (0);
	if (!is_valid(argv, argc))
		output_error(1);
	stack1 = init_stack(argv);
	if (!stack1)
		return (0);
	fill_stack(stack1, argc);
	if (is_sorted(stack1->arr, argv))
	{
		free_int_arr(stack1->arr, argv);
		free(stack1);
		return (0);
	}
	for(int i = 0; i <= stack1->top; i++)
		printf("%d ", stack1->arr[i]);
	// stack2 = (t_ps *)ft_calloc(1, sizeof(t_ps));
	// if (!stack2)
	// {
	// 	free (stack1);
	// 	return (0);
	// }
	return (0);
}
