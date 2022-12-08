/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:10:59 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/08 18:42:27 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "../libft/libft.h"
# include "unistd.h"
# include <stdio.h>

typedef struct	s_stack
{
	int	*arr;
	int	max;
	int	top;
}			t_stack;

t_stack	*init_stack(int max);
void	clean(t_stack *stack);
int		is_valid(int argv, char **argc);
void	output_error(int quit);
int		is_sorted(int *arr, int len);
int		push(t_stack *stack, int val);
int		full(t_stack *stack);
void	fill_stack(t_stack *stack, char **argc);
int		empty(t_stack *stack);
int		pop(t_stack *stack);
int		handle_cases(t_stack *stack1, t_stack *stack2);
void	s(t_stack *stack, char stack_name);
void	ss(t_stack *stack1, t_stack *stack2);
void	pa(t_stack *stack1, t_stack *stack2);
void	pb(t_stack *stack1, t_stack *stack2);
void	r(t_stack *stack, char stack_name);
void	rr(t_stack *stack1, t_stack *stack2);
void	rrr(t_stack *stack1, t_stack *stack2);
#endif
