/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:21:57 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/09 15:56:38 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	handle_3(t_stack *stack1, t_stack *stack2)
{
	int	*arr;
	int	*arr2;

	arr = stack1->arr;
	arr2 = stack2->arr;

	if (arr[2] < arr[1] && arr[2] > arr[0])
		rrab(stack1, 'a');
	if (arr[0] > arr[1] && arr[0] > arr[3])
		s(stack1, 'a');
}
