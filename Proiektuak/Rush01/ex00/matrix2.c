/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarmien <jsarmien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 20:02:56 by jsarmien          #+#    #+#             */
/*   Updated: 2022/07/10 22:40:42 by jsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	ft_row_is_full(int matrix[4][4], int coord_x)
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		if (matrix[coord_x][i] == -1)
			return (false);
	i++;
	}
	return (true);
}

bool	ft_col_is_full(int matrix[4][4], int coord_y)
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		if (matrix[i][coord_y] == -1)
			return (false);
	i++;
	}
	return (true);
}
