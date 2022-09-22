/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:00:57 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/06 11:28:45 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *x,  int *y)

{	
	int z;
	
	z = *x;
	*x= *y;
	*y = z;

}

int	main(void)
{
	int x = 7;
	int y = 8;
	int *a = &x;
	int *b = &y;
	ft_swap(&a, &b);
	printf("Variable a igual a %d\n", x);
	printf("Variable b igual a %d", y);
	return(0);

}