/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_100.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:25:58 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/14 11:56:49 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	handle_portion(t_stack *stack1, t_stack *stack2, t_portion portion)
{
	if (top(stack1) >= portion.start && top(stack1) <= portion.end)
	{
		if (empty(stack2))
			pb(stack1, stack2);
		else if (top(stack1) < get_min(stack2))
		{
			while(top(stack2) != get_min(stack2))
				check_faster(stack2, get_min(stack2));
			pb(stack1, stack2);
			//print_stacks(stack1, stack2);
		}
		else if (top(stack1) > get_bigger(stack2))
		{
			if (empty(stack2))
			{
				pb(stack1, stack2);
				//print_stacks(stack1, stack2);
			}
			else
			{
				printf("HERE\n");
				while(top(stack2) != get_min(stack2))
					check_faster(stack2, get_min(stack2));
				pb(stack1, stack2);
				//print_stacks(stack1, stack2);
				r(stack2, 'b');
				//print_stacks(stack1, stack2);
			}
			
		}
		else
		{
			while(!(top(stack2) < top(stack1) && stack2->arr[stack2->top - 1] > top(stack1)))
			{
				r(stack2, 'a');
				//print_stacks(stack1, stack2);
			}
			r(stack2, 'b');
			//print_stacks(stack1, stack2);
			pb(stack1, stack2);
			//print_stacks(stack1, stack2);
		}
	}
	while (get_min(stack2) != top(stack2))
		check_faster(stack2, get_min(stack2));
}

static int	check_values_range(t_stack *stack, t_stack *stack2, t_portion portion)
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

static int	faster_to_top(t_stack *stack, t_portion portion)
{
	int	up;
	int	down;
	int i;
	
	i = 0;
	while (i <= stack->top)
	{
		if (stack->arr[i] >= portion.start && stack->arr[i] <= portion.end)
		{
			up = stack->arr[i];
			break;
		}
		i++;
	}
	i = stack->top;
	while (i >= 0)
	{
		if (stack->arr[i] >= portion.start && stack->arr[i] <= portion.end)
		{
			down = stack->arr[i];
			break;
		}
		i--;
	}
	if (stack->top - down < up)
		return (down);
	else
		return (up);
	
}

void	handle_100(t_stack *stack1, t_stack *stack2)
{
	t_portion portion;
	int	val;
	portion.start = get_min(stack1);
	portion.end = portion.start + 10;
	//printf("faster: %d\n", faster_to_top(stack1, portion));
	while (!empty(stack1))
	{
		while (check_values_range(stack1, stack2, portion))
		{
			
			val = faster_to_top(stack1, portion);
			while (top(stack1) != val)
				check_faster(stack1, val);
			handle_portion(stack1, stack2, portion);
		}
		portion.start += 20;
		portion.end += 20;
	}
	while (!empty(stack2))
	{
		rrab(stack2, 'b');
		pa(stack1, stack2);
	}
	//print_stacks(stack1, stack2);
}