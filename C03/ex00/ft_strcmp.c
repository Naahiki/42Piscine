/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:23:49 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/13 19:18:43 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	i++;
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_strcmp("Hola", "Hola"));
	printf("\n%d", ft_strcmp( "HoLa", "Hola"));
	printf("\n%d", ft_strcmp( "Nahikari", "Nahikari1"));
	printf("\n%d", ft_strcmp( "Nahikari", "Nahiki"));
	printf("\n%d", ft_strcmp( "Nahiki", "Nahikari"));
}*/