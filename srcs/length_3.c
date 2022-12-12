/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:21:57 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/12 09:04:30 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	handle_3(t_stack *stack1)
{
	int	*arr;

	arr = stack1->arr;
	if (arr[2] < arr[1] && arr[2] < arr[0] && arr[1] < arr[0])
		return ;
	else if (arr[2] > arr[1] && arr[2] < arr[0] && arr[1] < arr[0])
		s(stack1, 'a');
	else if (arr[2] > arr[1] && arr[2] > arr[0] && arr[1] > arr[0])
	{
		s(stack1, 'a');
		rrab(stack1, 'a');
	}
	else if (arr[2] > arr[1] && arr[2] > arr[0] && arr[1] < arr[2])
		r(stack1, 'a');
	else if (arr[2] < arr[1] && arr[2] < arr[0] && arr[1] > arr[2])
	{
		s(stack1, 'a');
		r(stack1, 'a');
	}
	else if (arr[2] < arr[1] && arr[2] > arr[0] && arr[1] > arr[0])
		rrab(stack1, 'a');
}
