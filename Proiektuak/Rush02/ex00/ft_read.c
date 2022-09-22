/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:59:11 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/07/17 19:02:35 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rush.h"

int	get_file(int argc, char	**argv)
{
	if (argc == 2)
		return (open("numbers.dict", O_RDONLY));
	else
		return (open (argv[1], O_RDONLY));
}

char	*ft_readdict(int argc, char **argv)
{
	int		i;
	int		file_id;
	char	*dict;

	i = 0;
	file_id = get_file(argc, argv);
	dict = malloc (sizeof(char) * 50);
	while (read(file_id, &dict[i], 1))
		i++;
	dict[i] = '\0';
	return (dict);
}
