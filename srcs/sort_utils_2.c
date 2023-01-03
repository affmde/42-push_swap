/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:03:29 by andrferr          #+#    #+#             */
/*   Updated: 2023/01/03 17:50:02 by andrferr         ###   ########.fr       */
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
			*down = stack->arr[i];
			break ;
		}
		i++;
	}
	i = stack->top;
	while (i >= 0)
	{
		if (stack->arr[i] >= portion->start && stack->arr[i] <= portion->end)
		{
			*up = stack->arr[i];
			break ;
		}
		i--;
	}
}

static	int	get_index(t_stack *stack, int up, int down)
{
	int	i;
	int	j;

	i = -1;
	while (stack->arr[++i] != up)
		;
	j = -1;
	while (stack->arr[++j] != down)
		;
	if (stack->top - i < j)
		return (i);
	else
		return (j);
}

int	faster_to_top(t_stack *stack, t_portion *portion)
{
	int	up;
	int	down;
	int	index;

	handle_checkes(stack, portion, &up, &down);
	index = get_index(stack, up, down);
	return (stack->arr[index]);
}
