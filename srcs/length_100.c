/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_100.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:25:58 by andrferr          #+#    #+#             */
/*   Updated: 2023/01/02 10:56:58 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	handle_portion(t_stack *stack1, t_stack *stack2, t_portion portion)
{
	if (top(stack1) > get_bigger(stack2) || empty(stack2))
		pb(stack1, stack2);
	else
	{
		pb(stack1, stack2);
		rotation(stack1, stack2, 'b');
	}
}

static int	check_values_range(t_stack *stack,
	t_stack *stack2, t_portion portion)
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
	int			range;

	range = get_range(stack1);
	portion.start = get_min(stack1);
	portion.end = portion.start + range;
	while (!empty(stack1))
	{
		while (check_values_range(stack1, stack2, portion))
			handle_values_to_move(stack1, stack2, &portion);
		portion.start += range;
		portion.end += range;
	}
	while (!empty(stack2))
	{
		checker = check_faster(stack2, get_bigger(stack2));
		while (top(stack2) != get_bigger(stack2))
			handle_checker(checker, stack1, stack2, 'b');
		pa(stack1, stack2);
	}
}
