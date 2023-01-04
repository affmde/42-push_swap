/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:10:59 by andrferr          #+#    #+#             */
/*   Updated: 2023/01/04 11:55:14 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>

typedef struct s_stack
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

typedef struct s_portion
{
	int	start;
	int	end;
}		t_portion;

t_stack	*init_stack(int max);
int		get_array(t_control *control, int argc, char **argv);
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
int		top(t_stack *stack);
int		handle_cases(t_stack *stack1, t_stack *stack2);
void	swaps(t_stack *stack1, t_stack *stack2, char instruction);
void	pa(t_stack *stack1, t_stack *stack2);
void	pb(t_stack *stack1, t_stack *stack2);
void	rotation(t_stack *stack1, t_stack *stack2, char instruction);
void	reverse(t_stack *stack1, t_stack *stack2, char order);
void	handle_3(t_stack *stack1, t_stack *stack2);
char	**parse(char *str);
char	**parse_if_argc(int argv, char **argc);
int		arr_len(char **arr);
void	handle_5(t_stack *stack1, t_stack *stack2);
void	sort_long(t_stack *stack1, t_stack *stack2);
int		get_bigger(t_stack *stack);
int		get_min(t_stack *stack);
void	handle_checker(int checker, t_stack *stack1,
			t_stack *stack2, char instruction);
int		check_faster(t_stack *stack, int val);
int		faster_to_top(t_stack *stack, t_portion *portion);
int		get_portion_end(t_stack *stack);

#endif
