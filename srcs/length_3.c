/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:21:57 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/09 18:56:02 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	handle_3(t_stack *stack1, t_stack *stack2)
{
	int	*arr;
	int	*arr2;

	arr = stack1->arr;
	arr2 = stack2->arr;
	// for (int i = stack1->top; i >= 0; i--)
	// 	printf("i: %d %d\n", i, arr[i]);
	if (arr[0] < arr[1] && arr[1] < arr[2])
	{
		//printf("case 1\n");
		r(stack1, 'a');
		s(stack1, 'a');
	}
	else if (arr[0] > arr[1] && arr[0] > arr[3])
	{
		//printf("case 2\n");
		s(stack1, 'a');
	}
	else if (arr[0] < arr[1] && arr[0] > arr[2])
	{
		//printf("case 3\n");
		pb(stack1, stack2);
		s(stack1, 'a');
		pa(stack1, stack2);
	}
	else if (arr[0] < arr[1] && arr[0] < arr[2])
	{
		//printf("case 4\n");
		rrab(stack1, 'a');
	}
	else if (arr[2] > arr[1] && arr[1] < arr[0])
	{
		//printf("case 5\n");
		r(stack1, 'a');
	}
}
