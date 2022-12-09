/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:10:24 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/09 15:47:19 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	s(t_stack *stack, char stack_name)
{
	int	tmp;
	
	tmp = stack->arr[stack->top];
	stack->arr[stack->top] = stack->arr[stack->top - 1];
	stack->arr[stack->top - 1] = tmp;
	if (stack_name == 'a')
		ft_putstr("sa\n");
	if (stack_name == 'b')
		ft_putstr("sb\n");
}

void	ss(t_stack *stack1, t_stack *stack2)
{
	s(stack1, 's');
	s(stack2, 's');
	ft_putstr("ss\n");
}
