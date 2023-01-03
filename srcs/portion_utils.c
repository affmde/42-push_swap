/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   portion_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:18:51 by andrferr          #+#    #+#             */
/*   Updated: 2023/01/03 14:41:23 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

static int	get_nbr_portions(int elems)
{
	if (elems <= 100)
		return (elems / 4);
	return (elems / 10);
}

int	get_portion_border(t_stack *stack)
{
	int	counter;
	int	i;
	int j;
	int	val;

	i = 0;
	if (get_nbr_portions(stack->max) < stack->top)
		val = get_nbr_portions(stack->max);
	else
		val = 0;
	while (i <= stack->top)
	{
		j = 0;
		counter = 0;
		while(j <= stack->top)
		{
			if (counter == stack->top - val)
				return (stack->arr[i]);
			if (stack->arr[i] <= stack->arr[j])
				counter++;
			j++;
		}
		i++;
	}
	return (0);
}
