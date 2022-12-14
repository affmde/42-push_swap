/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_cases.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:35:16 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/13 13:29:33 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

static int	check_sorted(t_stack *stack1, t_stack *stack2)
{
	if (is_sorted(stack1->arr, stack1->max))
		return (1);
	return (0);
}

static void	handle_2(t_stack *stack)
{
	if (stack->arr[0] < stack->arr[1])
		s(stack, 'a');
}

int	handle_cases(t_stack *stack1, t_stack *stack2)
{
	if (check_sorted(stack1, stack2))
		return (0);
	else if (stack1->max == 2)
		handle_2(stack1);
	else if (stack1->max <= 3)
		handle_3(stack1);
	else if(stack1->max <=5)
		handle_5(stack1, stack2);
	else if (stack1->max <=100)
		handle_100(stack1, stack2);
	return (1);
}
