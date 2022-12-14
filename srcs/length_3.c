/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:21:57 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/14 16:42:42 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	handle_3(t_stack *stack1, t_stack *stack2)
{
	int	*arr;

	arr = stack1->arr;
	if (arr[2] < arr[1] && arr[2] < arr[0] && arr[1] < arr[0])
		return ;
	else if (arr[2] > arr[1] && arr[2] < arr[0] && arr[1] < arr[0])
		swaps(stack1, stack2, 'a');
	else if (arr[2] > arr[1] && arr[2] > arr[0] && arr[1] > arr[0])
	{
		swaps(stack1, stack2, 'a');
		reverse(stack1, stack2, 'a');
	}
	else if (arr[2] > arr[1] && arr[2] > arr[0] && arr[1] < arr[2])
		rotation(stack1, stack2, 'a');
	else if (arr[2] < arr[1] && arr[2] < arr[0] && arr[1] > arr[2])
	{
		swaps(stack1, stack2, 'a');
		rotation(stack1, stack2, 'a');
	}
	else if (arr[2] < arr[1] && arr[2] > arr[0] && arr[1] > arr[0])
		reverse(stack1, stack2, 'a');
}
