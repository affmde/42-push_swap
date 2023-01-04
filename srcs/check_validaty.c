/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_validaty.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:09:42 by andrferr          #+#    #+#             */
/*   Updated: 2023/01/04 11:52:21 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

static int	is_repeated(int len, char **arr)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (!ft_strncmp(arr[i], arr[j],
					ft_max(ft_strlen(arr[i]), ft_strlen(arr[j]))))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	check_overflow(char *str)
{
	int	len;
	int	let;
	int	val;

	val = ft_atoi(str);
	if (val < 0)
		len = ft_nbr_of_digits(val) + 1;
	else
		len = ft_nbr_of_digits(val);
	let = ft_strlen(str);
	if (let != len)
		return (0);
	return (1);
}

static int	check_no_digits(int len, char **arr)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		if (!check_overflow(arr[i]))
			return (0);
		j = 0;
		if (arr[i][j] == '-' || arr[i][j] == '+')
			j++;
		if (!arr[i][j])
			return (0);
		while (arr[i][j])
		{
			if (!ft_isdigit(arr[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_valid(int argv, char **argc, t_control *control)
{
	int		len;

	len = arr_len(control->arr);
	if (!check_no_digits(len, control->arr))
		return (0);
	if (!is_repeated(len, control->arr))
		return (0);
	control->max = len;
	return (1);
}
