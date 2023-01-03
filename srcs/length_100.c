/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_100.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:25:58 by andrferr          #+#    #+#             */
/*   Updated: 2023/01/03 15:48:23 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	handle_portion(t_stack *stack1, t_stack *stack2, t_portion portion)
{
	if (top(stack1) > get_bigger(stack2))
	{
		pb(stack1, stack2);
		rotation(stack1, stack2, 'b');
	}
	else
		pb(stack1, stack2);
}

static int	check_values_range(t_stack *stack, t_portion portion)
{
	int	i;

	i = stack->top;
	while (i >= 0)
	{
		if (stack->arr[i] >= portion.start && stack->arr[i] <= portion.end)
			return (1);
		i--;
	}
	return (0);
}

static void	handle_values_to_move(t_stack *stack1,
	t_stack *stack2, t_portion *portion)
{
	int	val;
	int	checker;

	val = faster_to_top(stack1, portion);
	checker = check_faster(stack1, val);
	while (top(stack1) != val)
		handle_checker(checker, stack1, stack2, 'a');
	handle_portion(stack1, stack2, *portion);
}

void	sort_long(t_stack *stack1, t_stack *stack2)
{
	t_portion	portion;
	int			checker;

	while (!empty(stack1))
	{
		portion.start = get_min(stack1);
		portion.end = get_portion_end(stack1);
		while (check_values_range(stack1, portion))
			handle_values_to_move(stack1, stack2, &portion);
	}
	while (!empty(stack2))
	{
		checker = check_faster(stack2, get_bigger(stack2));
		while (top(stack2) != get_bigger(stack2))
			handle_checker(checker, stack1, stack2, 'b');
		pa(stack1, stack2);
	}
}
