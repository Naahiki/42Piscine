  /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarmien <jsarmien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 23:30:05 by jsarmien          #+#    #+#             */
/*   Updated: 2022/07/10 22:38:30 by jsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

void	ft_view_row(int matrix[4][4], int coord_x, int view_l_r[2]);
void	ft_view_col(int matrix[4][4], int coord_y, int view_t_b[2]);
void	ft_get_arg_t_b(int param[4][4], int coord_y, int arg_t_b[2]);
void	ft_get_arg_l_r(int param[4][4], int coord_x, int arg_l_r[2]);
bool	ft_row_is_full(int matrix[4][4], int coord_x);
bool	ft_col_is_full(int matrix[4][4], int coord_y);

bool	ft_check_row(int matrix[4][4], int coord_x, int arg_l_r[2])
{
	int	view_l_r[2];

	ft_view_row(matrix, coord_x, view_l_r);
	if (ft_row_is_full(matrix, coord_x))
		return (view_l_r[0] == arg_l_r[0] && view_l_r[1] == arg_l_r[1]);
	else
		return (view_l_r[0] <= arg_l_r[0]);
}

bool	ft_check_col(int matrix[4][4], int coord_y, int arg_t_b[2])
{
	int	view_t_b[2];

	ft_view_col(matrix, coord_y, view_t_b);
	if (ft_col_is_full(matrix, coord_y))
		return (view_t_b[0] == arg_t_b[0] && view_t_b[1] == arg_t_b[1]);
	else
		return (view_t_b[0] <= arg_t_b[0]);
}

bool	ft_check_number(int matrix[4][4], int param[4][4], int coord[2])
{
	int		arg[2];

	ft_get_arg_l_r(param, coord[0], arg);
	ft_get_arg_l_r(param, coord[0], arg);
	if (ft_check_row(matrix, coord[0], arg))
	{
		ft_get_arg_t_b(param, coord[1], arg);
		return (ft_check_col(matrix, coord[1], arg));
	}
	return (false);
}
