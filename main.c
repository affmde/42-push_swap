/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:45:09 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/07 20:09:34 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_push_swap.h"

int	main(int argv, char **argc)
{
	t_ps *stack1;
	t_ps *stack2;

	if (argv < 2)
		return (0);
	if (!is_valid(argv, argc))
		output_error(1);
	stack1 = (t_ps *)ft_calloc(1, sizeof(t_ps));
	if (!stack1)
		return (0);
	stack1->arr = parse(argv, argc);
	if (!is_sorted(stack1->arr, argv))
	{
		free(stack1->arr);
		free(stack1);
		return (0);
	}
	stack2 = (t_ps *)ft_calloc(1, sizeof(t_ps));
	if (!stack2)
	{
		free (stack1);
		return (0);
	}
	return (0);
}
