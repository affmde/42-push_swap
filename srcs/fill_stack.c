/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:35:57 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/09 15:56:14 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void	fill_stack(t_stack *stack, char **argc)
{
	int	i;

	i = stack->max;

	while (i-- > 0)
		push(stack, ft_atoi(argc[i]));
}
