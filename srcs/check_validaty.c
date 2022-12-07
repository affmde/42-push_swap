/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_validaty.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:09:42 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/07 19:44:17 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int	is_repeated(int argv, char **argc)
{
	int	i;
	int	j;

	i = 1;
	while (i < argv)
	{
		j = i + 1;
		while (j < argv)
		{
			if (!ft_strncmp(argc[i], argc[j],
					ft_max(ft_strlen(argc[i]), ft_strlen(argc[j]))))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_overflow(char *str)
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

int	check_no_digits(int argv, char **argc)
{
	int	i;
	int	j;

	i = 1;
	while (i < argv)
	{
		if (!check_overflow(argc[i]))
			return (0);
		j = 0;
		if (argc[i][0] == '-' || argc[i][0] == '+')
			j++;
		while (argc[i][j])
		{
			if (!ft_isdigit(argc[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_valid(int argv, char **argc)
{
	if (!check_no_digits(argv, argc))
		return (0);
	if (!is_repeated(argv, argc))
		return (0);
	return (1);
}
