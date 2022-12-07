/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:45:09 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/07 19:36:54 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_push_swap.h"

int	main(int argv, char **argc)
{
	if (argv < 2)
		return (0);
	if (!is_valid(argv, argc))
		output_error(1);
	return (0);
}
