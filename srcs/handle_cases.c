/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_cases.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:35:16 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/08 16:09:30 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

static int	check_sorted(t_stack *stack1, t_stack *stack2)
{
	if (is_sorted(stack1->arr, stack1->max))
		return (1);
	return (0);
}

static int	handle_3(t_stack *stack1, t_stack *stack2)
{
	return (1);
}

int	handle_cases(t_stack *stack1, t_stack *stack2)
{
	if (check_sorted(stack1, stack2))
		return (0);
	if (stack1->max <= 3)
		handle_3(stack1, stack2);
	return (1);
}
