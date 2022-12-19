/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:56:51 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/19 11:41:38 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

static void	handle_minmax_on_b(t_stack *stack1, t_stack *stack2)
{
	int	checker;

	if (top(stack2) < get_min(stack1))
	{
		checker = check_faster(stack1, get_min(stack1));
		while (top(stack1) != get_min(stack1))
			handle_checker(checker, stack1, stack2, 'a');
		pa(stack1, stack2);
	}
	else if (top(stack2) > get_bigger(stack1))
	{
		checker = check_faster(stack1, get_min(stack1));
		while (top(stack1) != get_min(stack1))
			handle_checker(checker, stack1, stack2, 'a');
		pa(stack1, stack2);
		rotation(stack1, stack1, 'a');
	}
}

static void	handle_between_nbrs(t_stack *stack1, t_stack *stack2)
{
	int	checker;

	checker = check_faster(stack1, get_min(stack1));
	while (!(top(stack1) < top(stack2)
			&& stack1->arr[stack1->top - 1] > top(stack2)))
		handle_checker(checker, stack1, stack2, 'a');
	pa(stack1, stack2);
	swaps(stack1, stack2, 'a');
}

void	handle_5(t_stack *stack1, t_stack *stack2)
{
	int	checker;

	pb(stack1, stack2);
	pb(stack1, stack2);
	handle_3(stack1, stack2);
	while (!empty(stack2))
	{
		if (top(stack2) < get_min(stack1) || top(stack2) > get_bigger(stack1))
			handle_minmax_on_b(stack1, stack2);
		else if (top(stack2) < stack1->arr[0] && top(stack2) > stack1->arr[1])
		{
			reverse(stack1, stack2, 'a');
			pa(stack1, stack2);
		}
		else
			handle_between_nbrs(stack1, stack2);
	}
	checker = check_faster(stack1, get_min(stack1));
	while (get_min(stack1) != top(stack1))
		handle_checker(checker, stack1, stack2, 'a');
}
