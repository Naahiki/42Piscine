/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:52:01 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/02 12:43:29 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_mptyln(int y)
{
	int	cont;

	cont = 0;
	while (cont < y)
	{
		ft_putchar('\n');
		cont++;
	}
}

void	ft_lastln(int x)
{
	int	cont;

	cont = 2;
	ft_putchar('o');
	while (cont < x)
	{
		ft_putchar('-');
		cont++;
	}
	if (x > 1)
		ft_putchar('o');
	ft_putchar('\n');
}

void	ft_midln(int x)
{
	int	cont;

	cont = 2;
	ft_putchar('|');
	while (cont < x)
	{
		ft_putchar(' ');
		cont++;
	}
	if (x > 1)
		ft_putchar('|');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 2;
	if (x == 0 || y == 0)
		ft_mptyln(y);
	else
	{
		ft_lastln(x);
		while (i < y)
		{
			ft_midln(x);
			i++;
		}
		if (y > 1)
			ft_lastln(x);
	}
}
