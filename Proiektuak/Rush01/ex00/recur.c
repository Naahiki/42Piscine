/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recur.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarmien <jsarmien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:32:26 by jsarmien          #+#    #+#             */
/*   Updated: 2022/07/10 23:01:15 by jsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	hay_numero_valido(int num);
bool	ft_solution_found(int matrix[4][4]);
void	ft_next_cell(int coord[2], int coord_dest[2]);
bool	ft_check_number(int matrix[4][4], int param[4][4], int coord[2]);
void	ft_copy_coord(int coord_orig[], int *coord_dest);
bool	ft_matrix_is_full(int matrix[4][4]);
void	print_solution(int matrix[4][4], bool *result);
int		ft_get_number_cell(int matrix[4][4], int coord[2]);

int	ft_get_number_1_4(int matrix[4][4], int coord[2])
{
	int		nb;
	int		i;
	bool	next;

	nb = ft_get_number_cell(matrix, coord) + 1;
	while (nb <= 4)
	{
		next = false;
		i = 0;
		while (i < coord[0] && !next)
		{
			next = (matrix[i][coord[1]] == nb && nb > 0);
			i++;
		}
		i = 0;
		while (i < coord[1] && !next)
		{
			next = (matrix[coord[0]][i] == nb && nb > 0);
			i++;
		}
		if (!next)
			return (nb);
		nb++;
	}
	return (-1);
}

void	ft_recursive(int matrix[4][4], int param[4][4],
					int coord[2], bool *result)
{
	int		num;
	bool	check;
	int		next_coord[2];

	if (!*result)
	{
		num = ft_get_number_1_4(matrix, coord);
		matrix[coord[0]][coord[1]] = num;
		while (num != -1 && !*result)
		{
			check = ft_check_number(matrix, param, coord);
			if (check && ft_matrix_is_full(matrix))
			{
				print_solution(matrix, result);
			}
			else if (check)
			{
				ft_next_cell(coord, next_coord);
				ft_recursive(matrix, param, next_coord, result);
			}
			num = ft_get_number_1_4(matrix, coord);
			matrix[coord[0]][coord[1]] = num;
		}
		matrix[coord[0]][coord[1]] = -1;
	}
}
