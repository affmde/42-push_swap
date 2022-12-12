/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:10:59 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/11 13:52:15 by andrferr         ###   ########.fr       */
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

typedef struct s_control
{
	int		max;
	char	**arr;
}		t_control;

void	print_stacks(t_stack *stack1, t_stack *stack2); //DONT FORGET TO REMOVE THIS!!!!!!!!!!!
t_stack	*init_stack(int max);
void	clean(t_stack *stack);
void	free_char_arr(char **arr, int len);
int		is_valid(int argv, char **argc, t_control *control);
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
void	rrab(t_stack *stack, char stack_name);
void	rrr(t_stack *stack1, t_stack *stack2);
void	handle_3(t_stack *stack1);
char	**parse(char *str);
char	**parse_if_argc(int argv, char **argc);
int		arr_len(char **arr);
void    handle_5(t_stack *stack1, t_stack *stack2);


#endif
