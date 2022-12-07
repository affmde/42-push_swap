/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:10:59 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/07 20:00:51 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "../libft/libft.h"
# include "unistd.h"
# include <stdio.h>

typedef struct	s_ps
{
	int	*arr;
}			t_ps;

int		*parse(int argv, char **argc);
int		is_valid(int argv, char **argc);
void	output_error(int quit);
int		is_sorted(int *arr, int len);

#endif
