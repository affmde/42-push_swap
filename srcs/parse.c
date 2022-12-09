/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:03:39 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/09 15:07:12 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

char	**parse(char *str)
{
	char	**arr;

	arr = ft_split(str, ' ');
	return (arr);
}

char	**parse_if_argc(int argv, char **argc)
{
	int i;
	char **arr;

	arr = (char**)malloc(sizeof(char*) * argv);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < argv - 1)
	{
		arr[i] = ft_strdup(argc[i + 1]);
		if (!arr[i])
		{
			free_char_arr(arr, i);
			return (NULL);
		}
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

int	arr_len(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}
