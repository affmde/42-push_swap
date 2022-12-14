/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:56:51 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/14 13:35:51 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

static void handle_checker(int checker, t_stack *stack)
{
	if(checker)
		r(stack, 'a');
	else
		rrab(stack, 'a');
}
void	handle_minmax_on_b(t_stack *stack1, t_stack *stack2)
{
	int	checker;
	
	if (top(stack2) < get_min(stack1))
	{
		checker = check_faster(stack1, get_min(stack1));
		while(top(stack1) != get_min(stack1))
			handle_checker(checker, stack1);
		pa(stack1, stack2);
	}
	else if(top(stack2) > get_bigger(stack1))
	{
		checker = check_faster(stack1, get_min(stack1));
		while(top(stack1) != get_min(stack1))
			handle_checker(checker, stack1);
		pa(stack1, stack2);
		r(stack1, 'a');
	}
}

void	handle_5(t_stack *stack1, t_stack *stack2)
{
	int checker;
	
	pb(stack1, stack2);
	pb(stack1, stack2);
	handle_3(stack1);
	while (stack2->top >= 0)
	{
		if (top(stack2) < get_min(stack1) || top(stack2) > get_bigger(stack1))
			handle_minmax_on_b(stack1, stack2);
		else if(top(stack2) < stack1->arr[0] && top(stack2) > stack1->arr[1])
		{
			rrab(stack1, 'a');
			pa(stack1, stack2);
		}
		else
		{
			checker = check_faster(stack1, get_min(stack1));
			while (!(top(stack1) < top(stack2) && stack1->arr[stack1->top - 1] > top(stack2)))
				handle_checker(checker, stack1);
			pa(stack1, stack2);
			s(stack1, 'a');
		}
	}
	checker = check_faster(stack1, get_min(stack1));
	while (get_min(stack1) != top(stack1))
		handle_checker(checker, stack1);
}
