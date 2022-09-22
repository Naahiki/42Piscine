/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   views2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarmien <jsarmien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:48:49 by jsarmien          #+#    #+#             */
/*   Updated: 2022/07/10 22:38:09 by jsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_first_number_row(int matrix[4][4], int coord_x)
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		if (matrix[coord_x][i] != -1)
			return (matrix[coord_x][i]);
		i++;
	}
	return (-1);
}

int	ft_last_number_row(int matrix[4][4], int coord_x)
{
	int	i;

	i = 3;
	while (i >= 0)
	{
		if (matrix[coord_x][i] != -1)
			return (matrix[coord_x][i]);
		i--;
	}
	return (-1);
}

int	ft_first_number_col(int matrix[4][4], int coord_y)
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		if (matrix[i][coord_y] != -1)
			return (matrix[i][coord_y]);
		i++;
	}
	return (-1);
}

int	ft_last_number_col(int matrix[4][4], int coord_y)
{
	int	i;

	i = 3;
	while (i >= 0)
	{
		if (matrix[i][coord_y] != -1)
			return (matrix[i][coord_y]);
		i--;
	}
	return (-1);
}
