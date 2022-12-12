/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:56:51 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/12 09:46:37 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

void    handle_5(t_stack *stack1, t_stack *stack2)
{
    print_stacks(stack1, stack2);
    pb(stack1, stack2);
    pb(stack1, stack2);
    handle_3(stack1);
    print_stacks(stack1, stack2);
    while (stack2->arr[stack2->top])
    {
        if (stack2->arr[stack2->top] > stack1->arr[0] && stack2->arr[stack2->top] > stack1->arr[stack1->top])
        {
            //printf("HERE!!!\n");
            pa(stack1, stack2);
            //r(stack1, 'a');
        }
        //printf("top: %d\n", stack1->arr[stack1->top]);
        while (stack1->arr[stack1->top] < stack2->arr[stack2->top])
        {
            //printf("top: %d\n", stack1->arr[stack1->top]);
            r(stack1, 'a');
        }
        //(stack1, stack2);
        pa(stack1, stack2);
        r(stack1, 'a');
        print_stacks(stack1, stack2);
        //printf("---------------\n");
    }
    while (stack1->arr[stack1->top] > stack1->arr[0])
        r(stack1, 'a');
}