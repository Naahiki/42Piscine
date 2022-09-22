/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:16:58 by arlandia          #+#    #+#             */
/*   Updated: 2022/07/17 19:24:40 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

int		check_error(int argc, char *argv[]);
int		get_file(int argc, char	**argv);
char	*ft_readdict(int argc, char **argv);
int		dict_not_found(int argc, char *argv[]);
void	ft_putchar(char c);
void	ft_putnbr(double nb);
void	ft_putstr(char *str);

#endif
