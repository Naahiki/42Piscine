/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:52:01 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/03 16:30:10 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	limit_line(int x)
{
	int	cont_limit;

	cont_limit = 2;
	ft_putchar('o');
	while (cont_limit < x)
	{
		ft_putchar('-');
		cont_limit++;
	}
	if (x > 1)
		ft_putchar('o');
	ft_putchar('\n');
}

void	middle_line(int x)
{
	int	cont_mid;

	cont_mid = 2;
	ft_putchar('|');
	while (cont_mid < x)
	{
		ft_putchar(' ');
		cont_mid++;
	}
	if (x > 1)
		ft_putchar('|');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	cont;

	cont = 2;
	if (x < 0)
		x = x * (-1);
	if (y < 0)
		y = y * (-1);
	if (x == 0 || y == 0)
		return ;
	else
	{
		limit_line(x);
		while (cont < y)
		{
			middle_line(x);
			cont++;
		}
		if (y > 1)
			limit_line(x);
	}
}
