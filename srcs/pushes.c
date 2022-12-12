/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:20:34 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/11 11:03:57 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"
#include "../libft/libft.h"

void	pa(t_stack *stack1, t_stack *stack2)
{
	push(stack1, stack2->arr[stack2->top]);
	pop(stack2);
	ft_putstr("pa\n");
}

void	pb(t_stack *stack1, t_stack *stack2)
{
	push(stack2, stack1->arr[stack1->top]);
	pop(stack1);
	ft_putstr("pb\n");
}

