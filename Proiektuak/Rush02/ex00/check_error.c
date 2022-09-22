/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:35:56 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/19 15:53:24 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rush.h"

int	dict_not_found(int argc, char *argv[])
{
	if (argc == 3)
		if (open (argv[1], O_RDONLY) < 0)
			return (1);
	return (0);
}

int	check_error(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (!(argc == 2 || argc == 3))
		return (1);
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
				return (1);
		i++;
		}
	}
	else
	{
		while (argv[2][i] != '\0')
		{
			if (!(argv[2][i] >= '0' && argv[2][i] <= '9'))
				return (1);
			i++;
		}
	}
	return (0);
}
