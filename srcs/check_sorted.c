/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:58:22 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/14 12:15:46 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int	is_sorted(int *arr, int len)
{
	int	i;

	i = len - 1;
	while (i > 0)
	{
		if (arr[i] > arr [i - 1])
			return (0);
		i--;
	}
	return (1);
}
