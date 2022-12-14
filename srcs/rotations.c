/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:57:23 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/14 16:23:24 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

static void	r(t_stack *stack)
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
}

void	rotation(t_stack *stack1, t_stack *stack2, char instruction)
{
	if (instruction == 'a')
	{
		r(stack1);
		ft_putstr("ra\n");
	}
	else if (instruction == 'b')
	{
		r(stack2);
		ft_putstr("rb\n");
	}
	else
	{
		r(stack1);
		r(stack2);
		ft_putstr("rr\n");
	}
}
