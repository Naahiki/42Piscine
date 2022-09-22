/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarmien <jsarmien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:57:45 by jsarmien          #+#    #+#             */
/*   Updated: 2022/07/10 17:27:12 by jsarmien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	ft_prove_number(int num1, int num2)
{
	if (num1 == 4 && num2 != 1)
		return (false);
	else if ((num1 == 3 && num2 != 2) && (num1 == 3 && num2 != 1))
		return (false);
	else if (num1 == 2 && num2 == 4)
		return (false);
	else if (num1 == 1 && num2 == 1)
		return (false);
	return (true);
}

bool	ft_validate_arg_number(int param[4][4])
{
	int		i;

	i = 0;
	while (i <= 3)
	{
		if (!ft_prove_number(param[0][i], param[1][i]))
			return (false);
		if (!ft_prove_number(param[2][i], param[3][i]))
			return (false);
		i++;
	}
	return (true);
}
