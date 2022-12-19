/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:10:24 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/19 11:22:21 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

static void	s(t_stack *stack)
{
	int	tmp;

	tmp = stack->arr[stack->top];
	stack->arr[stack->top] = stack->arr[stack->top - 1];
	stack->arr[stack->top - 1] = tmp;
}

void	swaps(t_stack *stack1, t_stack *stack2, char instruction)
{
	if (instruction == 'a')
	{
		s(stack1);
		ft_putstr("sa\n");
	}
	else if (instruction == 'b')
	{
		s(stack2);
		ft_putstr("sb\n");
	}
	else
	{
		s(stack1);
		s(stack2);
		ft_putstr("ss\n");
	}
}
