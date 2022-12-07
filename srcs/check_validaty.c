/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_validaty.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:09:42 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/07 18:24:44 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

int	is_repeated(int argv, char **argc)
{
	int	i;
	int j;

	i = 1;
	while (i < argv)
	{
		j = i + 1;
		while (j < argv)
		{
			if (!ft_strncmp(argc[i], argc[j], ft_max(ft_strlen(argc[i]), ft_strlen(argc[j]))))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_no_digits(int argv, char **argc)
{
	int	i;
	int	int_len;
	int	strlen;
	int num;

	i = 1;
	while (i < argv)
	{
		num = ft_atoi(argc[i]);
		if (num < 0)
			int_len = ft_nbr_of_digits(ft_atoi(argc[i])) + 1;
		else
			int_len = ft_nbr_of_digits(ft_atoi(argc[i]));
		strlen = ft_strlen(argc[i]);
		if (int_len != strlen)
			return (0);
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
