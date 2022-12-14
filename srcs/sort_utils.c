/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:40:26 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/14 16:27:38 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int	get_bigger(t_stack *stack)
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

int	get_min(t_stack *stack)
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

int	check_faster(t_stack *stack, int val)
{
	int med;
	int	i;
	
	i = 0;
	while (stack->arr[i] != val)
		i++;
	med	= stack->top / 2;
	if (i >= med)
		return (1);
	else
		return (0);
}
void handle_checker(int checker, t_stack *stack1, t_stack *stack2, char instruction)
{
	if(checker)
	{
		if(instruction == 'a')
			rotation(stack1, stack2, 'a');
		else if (instruction == 'b')
			rotation(stack1, stack2, 'b');
	}
	else
	{
		if (instruction == 'a')
			reverse(stack1, stack2, 'a');
		else if (instruction == 'b')
			reverse(stack1, stack2, 'b');
	}
}