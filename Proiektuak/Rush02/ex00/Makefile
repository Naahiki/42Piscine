# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/17 11:50:04 by arlandia          #+#    #+#              #
#    Updated: 2022/07/19 15:48:43 by nrodrigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
NAME = Rush02

program: main.o ft_read.o check_error.o ft_putchar.o ft_putstr.o
		@gcc $(CFLAGS) -o $(NAME) main.o ft_read.o check_error.o ft_putchar.o ft_putstr.o

main.o: main.c Rush.h
		@gcc $(CFLAGS) -c main.c
		
error.o: check_error.c  Rush.h
		@gcc $(CFLAGS) -c check_error.c 
		
read.o: ft_read.c Rush.h
		@gcc $(CFLAGS) -c ft_read.c
				
putchar.o: ft_putchar.c Rush.h
		@gcc $(CFLAGS) -c ft_putchar.c

putstr.o: ft_putstr.c Rush.h
		@gcc $(CFLAGS) -c ft_putstr.c
		
clean:
		@rm -f *.o

fclean: clean 
		@rm -f $(NAME)
