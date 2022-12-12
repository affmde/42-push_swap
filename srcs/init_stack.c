/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:54:58 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/10 14:04:16 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

t_stack	*init_stack(int max)
{
	t_stack *stack;
	int	*arr;

	stack = (t_stack *)ft_calloc(1, sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->max = max;
	stack->top = -1;
	arr = (int *)ft_calloc(max, sizeof(int));
	if (!arr)
	{
		free(stack);
		return (0);
	}
	stack->arr = arr;
	return (stack);
}
