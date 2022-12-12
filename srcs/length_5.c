/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:56:51 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/12 17:00:52 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

static int	get_bigger(t_stack *stack)
{
	int	max;
	int	i;

	i = top(stack);
	max = top(stack);
	while (i > 0)
	{
		if (stack->arr[i] > max)
			max = stack->arr[i];
		i--;
	}
	return (max);
}

// static int	get_min(t_stack *stack)
// {
// 	int	min;
// 	int	i;

// 	i = top(stack);
// 	min = top(stack);
// 	while (i > 0)
// 	{
// 		if (stack->arr[i] < min)
// 			min = stack->arr[i];
// 		i--;
// 	}
// 	return (min);
// }

void	handle_5(t_stack *stack1, t_stack *stack2)
{
	print_stacks(stack1, stack2);
	pb(stack1, stack2);
	pb(stack1, stack2);
	handle_3(stack1);
	print_stacks(stack1, stack2);

	while (top(stack2))
	{
		printf("\n--------\ntop s2: %d\n", top(stack2));
		if (top(stack2) > stack1->arr[0] && top(stack2) > top(stack1))
		{
			if (top(stack2) > get_bigger(stack1))
			{
				pa(stack1, stack2);
				s(stack1, 'a');
			}
			else
				while (!(top(stack2) < top(stack1) && top(stack2) > stack1->arr[stack1->top - 1]))
					r(stack1, 'a');
		}
		printf("top: %d\n", stack1->arr[stack1->top]);
		while (top(stack1) < top(stack2))
		{
			printf("top: %d\n", stack1->arr[stack1->top]);
			r(stack1, 'a');
		}
		pa(stack1, stack2);
		printf("---------------\n");
		print_stacks(stack1, stack2);
	}
	while (top(stack1) > stack1->arr[0])
		r(stack1, 'a');
	printf("top: %d - bottom: %d\n", stack1->arr[stack1->top], stack1->arr[0]);
}
