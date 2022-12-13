/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:56:51 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/13 12:19:37 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

static int	get_bigger(t_stack *stack)
{
	int	max;
	int	i;

	i = stack->top;
	max = top(stack);
	while (i >= 0)
	{
		if (stack->arr[i] > max)
			max = stack->arr[i];
		i--;
	}
	return (max);
}

static int	get_min(t_stack *stack)
{
	int	min;
	int	i;

	i = stack->top;
	min = top(stack);
	while (i >= 0)
	{
		if (stack->arr[i] < min)
			min = stack->arr[i];
		i--;
	}
	return (min);
}

static void check_faster(t_stack *stack, int val)
{
	int med;
	int	i;
	
	i = 0;
	while (stack->arr[i] != val)
		i++;
	med	= stack->top / 2;
	if (i >= med)
		r(stack, 'a');
	else
		rrab(stack, 'a');
}

void	handle_5(t_stack *stack1, t_stack *stack2)
{
	pb(stack1, stack2);
	pb(stack1, stack2);
	handle_3(stack1);
	while (top(stack2))
	{
		if (top(stack2) < get_min(stack1))
		{
			while(top(stack1) != get_min(stack1))
				check_faster(stack1, get_min(stack1));
			pa(stack1, stack2);
		}
		else if(top(stack2) > get_bigger(stack1))
		{
			while(top(stack1) != get_min(stack1))
				check_faster(stack1, get_min(stack1));
			pa(stack1, stack2);
			r(stack1, 'a');
		}
		else
		{
			while (!(top(stack1) < top(stack2) && stack1->arr[stack1->top - 1] > top(stack2)))
				r(stack1, 'a');
			pa(stack1, stack2);
			s(stack1, 'a');
		}
	}
	while (get_min(stack1) != top(stack1))
		check_faster(stack1, get_min(stack1));
}
