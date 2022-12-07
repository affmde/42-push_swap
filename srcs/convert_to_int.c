/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:38:22 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/07 17:24:17 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int	*parse(int argv, char **argc)
{
	int	*arr;
	int	i;
	int	j;

	arr = (int *)malloc(sizeof(int) * argv);
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (++i < argv)
		arr[j++] = ft_atoi(argc[i]);
	return (arr);
}
