/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:03:29 by andrferr          #+#    #+#             */
/*   Updated: 2023/01/02 16:02:49 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

static void	handle_checkes(t_stack *stack,
	t_portion *portion, int *up, int *down)
{
	int	i;

	i = 0;
	while (i <= stack->top)
	{
		if (stack->arr[i] >= portion->start && stack->arr[i] <= portion->end)
		{
			*up = stack->arr[i];
			break ;
		}
		i++;
	}
	i = stack->top;
	while (i >= 0)
	{
		if (stack->arr[i] >= portion->start && stack->arr[i] <= portion->end)
		{
			*down = stack->arr[i];
			break ;
		}
		i--;
	}
}

int	faster_to_top(t_stack *stack, t_portion *portion)
{
	int	up;
	int	down;

	handle_checkes(stack, portion, &up, &down);
	if (stack->top - down < up)
		return (down);
	else
		return (up);
}

static int	get_nbr_portions(int elems)
{
	if (elems <= 100)
		return (6);
	return (11);
}

int	get_range(t_stack *stack)
{
	long long	s;
	int			result;

	s = get_bigger(stack) - get_min(stack);
	result = (int)(s / get_nbr_portions(stack->max));
	return (result);
}
