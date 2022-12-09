/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:57:23 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/09 18:42:00 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	r(t_stack *stack, char stack_name)
{
	int tmp;
	int i;

	i = stack->top;
	tmp = stack->arr[stack->top];
	while (i > 0)
	{
		stack->arr[i] = stack->arr[i - 1];
		i--;
	}
	stack->arr[0] = tmp;
	if (stack_name == 'a')
		ft_putstr("ra\n");
	if (stack_name == 'b')
		ft_putstr("rb\n");
}

void	rr(t_stack *stack1, t_stack *stack2)
{
	r(stack1, 'r');
	r(stack2, 'r');
	ft_putstr("rr\n");
}
