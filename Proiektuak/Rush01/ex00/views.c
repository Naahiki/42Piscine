/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   views.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarmien <jsarmien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 00:12:01 by jsarmien          #+#    #+#             */
/*   Updated: 2022/07/10 22:00:05 by jsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_first_number_row(int matrix[4][4], int coord_x);
int	ft_last_number_row(int matrix[4][4], int coord_x);
int	ft_first_number_col(int matrix[4][4], int coord_x);
int	ft_last_number_col(int matrix[4][4], int coord_x);

void	ft_view_row(int matrix[4][4], int coord_x, int view_l_r[2])
{
	int	i;
	int	j;
	int	max_l_r[2];

	view_l_r[0] = 1;
	view_l_r[1] = 1;
	max_l_r[0] = ft_first_number_row(matrix, coord_x);
	max_l_r[1] = ft_last_number_row(matrix, coord_x);
	i = 1;
	j = 2;
	while (i <= 3)
	{
		if (matrix[coord_x][i - 1] != -1 && matrix[coord_x][i] > max_l_r[0])
		{
			view_l_r[0]++;
			max_l_r[0] = matrix[coord_x][i];
		}
		if (matrix[coord_x][j + 1] != -1 && matrix[coord_x][j] > max_l_r[1])
		{
			view_l_r[1]++;
			max_l_r[1] = matrix[coord_x][j];
		}
		i++;
		j--;
	}
}

void	ft_view_col(int matrix[4][4], int coord_y, int view_t_b[2])
{
	int	i;
	int	j;
	int	max_t_b[2];

	view_t_b[0] = 1;
	view_t_b[1] = 1;
	i = 1;
	j = 2;
	max_t_b[0] = ft_first_number_col(matrix, coord_y);
	max_t_b[1] = ft_last_number_col(matrix, coord_y);
	while (i <= 3)
	{
		if (matrix[i - 1][coord_y] != -1 && matrix[i][coord_y] > max_t_b[0])
		{
			view_t_b[0]++;
			max_t_b[0] = matrix[i][coord_y];
		}
		if (matrix[j + 1][coord_y] != -1 && matrix[j][coord_y] > max_t_b[1])
		{
			view_t_b[1]++;
			max_t_b[1] = matrix[j][coord_y];
		}
		i++;
		j--;
	}
}
