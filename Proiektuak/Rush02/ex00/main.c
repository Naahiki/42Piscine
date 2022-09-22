/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:23:48 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/17 18:59:16 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rush.h"

int	main(int argc, char **argv)
{
	if (check_error(argc, argv) || dict_not_found(argc, argv))
	{
		ft_putstr("Error\n");
		return (0);
	}
	ft_putstr(ft_readdict(argc, argv));
	return (0);
}
