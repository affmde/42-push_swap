/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:45:09 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/09 08:26:12 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_push_swap.h"

int	main(int argv, char **argc)
{
	t_stack *stack1;
	t_stack *stack2;

	if (argv < 2)
		return (0);
	if (!is_valid(argv, argc))
		output_error(1);
	stack1 = init_stack(argv);
	if (!stack1)
		return (0);
	stack2 = init_stack(argv);
	if (!stack2)
	{
		free (stack1);
		return (0);
	}
	fill_stack(stack1, argc);
	handle_cases(stack1, stack2);
	pb(stack1, stack2);
	pb(stack1, stack2);
	rrab(stack1, 'a');
	rrab(stack2, 'b');
	for(int i = 0; i <= stack1->top; i++)
		printf("%d ", stack1->arr[i]);
	printf("\n-----------\n");
	for(int i = 0; i <= stack2->top; i++)
		printf("%d ", stack2->arr[i]);
	clean(stack1);
	clean(stack2);
	return (0);
}
