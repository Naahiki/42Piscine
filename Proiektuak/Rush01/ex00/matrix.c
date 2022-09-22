/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarmien <jsarmien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:30:18 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/10 23:00:34 by jsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

void	ft_putchar(char c);

void	print_solution(int matrix[4][4], bool *result)
{
	int		i;
	int		j;
	char	c;

	*result = true;
	i = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			c = matrix[i][j] + '0';
			ft_putchar(c);
			if (j < 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ini_matrix(int matrix[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			matrix[i][j] = -1;
			j++;
		}
		i++;
	}
}

void	ft_next_cell(int coord[2], int coord_dest[2])
{
	coord_dest[0] = coord[0];
	coord_dest[1] = coord[1];
	if (coord_dest[1] < 3)
	{
		coord_dest[1]++;
	}
	else if (coord_dest[0] < 3)
	{
		coord_dest[0]++;
		coord_dest[1] = 0;
	}
}

bool	ft_matrix_is_full(int matrix[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			if (matrix[i][j] == -1)
				return (false);
		j++;
		}
	i++;
	}
	return (true);
}

int	ft_get_number_cell(int matrix[4][4], int coord[2])
{
	int	n;

	n = matrix[coord[0]][coord[1]];
	if (n < 0)
		return (0);
	return (n);
}
