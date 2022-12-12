/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverses.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:11:29 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/11 10:05:31 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	rrab(t_stack *stack, char stack_name)
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
	if (stack_name == 'a')
		ft_putstr("rra\n");
	if (stack_name == 'b')
		ft_putstr("rrb\n");

}

void	rrr(t_stack *stack1, t_stack *stack2)
{
	rrab(stack1, 'r');
	rrab(stack2, 'r');
	ft_putstr("rrr\n");
}
