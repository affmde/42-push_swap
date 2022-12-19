/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverses.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:11:29 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/19 11:29:39 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

static void	rrab(t_stack *stack)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = stack->arr[0];
	while (i < stack->top)
	{
		stack->arr[i] = stack->arr[i + 1];
		i++;
	}
	stack->arr[stack->top] = tmp;
}

void	reverse(t_stack *stack1, t_stack *stack2, char order)
{
	if (order == 'a')
	{
		rrab(stack1);
		ft_putstr("rra\n");
	}
	else if (order == 'b')
	{
		rrab(stack2);
		ft_putstr("rrb\n");
	}
	else
	{
		rrab(stack1);
		rrab(stack2);
		ft_putstr("rrr\n");
	}
}
