/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarmien <jsarmien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:09:41 by jsarmien          #+#    #+#             */
/*   Updated: 2022/07/10 22:59:50 by jsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_recursive(int matrix[4][4], int param[4][4],
			int coord[2], bool *result);
void	ini_matrix(int matrix[4][4]);
bool	ft_validate_arg(int argc, char *argv[], int matrix_input[4][4]);

int	main(int argc, char *argv[])
{
	int		matrix[4][4];
	int		param[4][4];
	int		coord[2];
	bool	result;

	if (!ft_validate_arg(argc, argv, param))
	{
		ft_putstr("	Los datos de entrada no son correctos");
	}
	else
	{
		ini_matrix(matrix);
		result = true;
		coord[0] = 0;
		coord[1] = 0;
		result = false;
		ft_recursive(matrix, param, coord, &result);
		if (!result)
			ft_putstr("	No existe solución");
	}
}
