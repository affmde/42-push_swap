/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_base_actions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:31:26 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/12 12:07:07 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int	full(t_stack *stack)
{
	if (stack->top == stack->max - 1)
		return (1);
	return (0);
}

int	empty(t_stack *stack)
{
	if (stack->top == -1)
		return (1);
	return (0);
}

int	push(t_stack *stack, int val)
{
	if (full(stack))
		return (0);
	stack->top++;
	stack->arr[stack->top] = val;
	return (1);
}

int	pop(t_stack *stack)
{
	if (empty(stack))
		return (0);
	stack->arr[stack->top] = 0;
	stack->top--;
	return (1);
}

int	top(t_stack *stack)
{
	if (empty(stack))
		return (0);
	return (stack->arr[stack->top]);
}
