/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarmien <jsarmien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 12:28:39 by jsarmien          #+#    #+#             */
/*   Updated: 2022/07/10 21:53:27 by jsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	ft_validate_arg_number(int param[4][4]);
int		ft_strlen(char *str);

void	ft_get_arg_t_b(int param[4][4], int coord_y, int arg_t_b[2])
{
	arg_t_b[0] = param[0][coord_y];
	arg_t_b[1] = param[1][coord_y];
}

void	ft_get_arg_l_r(int param[4][4], int coord_x, int arg_l_r[2])
{
	arg_l_r[0] = param[2][coord_x];
	arg_l_r[1] = param[3][coord_x];
}

void	ft_ini_arg(char *argv[], int matrix_input[4][4])
{
	int	i;
	int	cont;

	cont = 0;
	i = 0;
	while (argv[1][i])
	{
		if (i % 2 == 0)
		{
			matrix_input[cont / 4][cont % 4] = argv[1][i];
			matrix_input[cont / 4][cont % 4] -= 48;
			cont++;
		}
		i++;
	}
}

bool	ft_validate_arg(int argc, char *argv[], int matrix_input[4][4])
{
	int	i;

	if (argc != 2)
		return (false);
	else
	{
		if (ft_strlen(argv[1]) != 31)
			return (false);
		else
		{
			i = 0;
			while (argv[1][i])
			{
				if (i % 2 == 1 && argv[1][i] != ' ')
				{
					return (false);
				}
				else if (i % 2 == 0 && (argv[1][i] < '1' || argv[1][i] > '4'))
					return (false);
				i++;
			}
		}
		ft_ini_arg(argv, matrix_input);
		return (ft_validate_arg_number(matrix_input));
	}
}
