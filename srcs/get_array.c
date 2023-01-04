/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_array.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 11:00:11 by andrferr          #+#    #+#             */
/*   Updated: 2023/01/04 11:51:43 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_push_swap.h"

static char	*join(char *str1, char *str2)
{
	char	*tmp;
	char	*tmp2;
	tmp = ft_strjoin(str1, " ");
	if (!tmp)
		return (NULL);
	tmp2 = ft_strjoin(tmp, str2);
	free(str1);
	free(tmp);
	return (tmp2);
}

static char	*get_str(int argc, char **argv)
{
	int		i;
	char *str;

	i = 1;
	str = ft_strdup(argv[1]);
	while (i < argc - 1)
	{
		if (!(str = join(str, argv[i + 1])))
			return (NULL);
		i++;
	}
	return (str);
}

int	get_array(t_control *control, int argc, char **argv)
{
	char	*str;
	char	**arr;

	str = get_str(argc, argv);
	if (!str)
		return (0);
	arr = ft_split(str, ' ');
	if (!arr)
		return (0);
	control->arr = arr;
	free(str);
	return (1);
}
