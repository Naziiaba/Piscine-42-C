# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: naidyral <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/15 18:31:00 by naidyral          #+#    #+#              #
#    Updated: 2019/08/15 18:38:55 by naidyral         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c -Wall -Werror -Wextra ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c && ar rc libft.a ft_putchar.o ft_putstr.o ft_strlen.o ft_strcmp.o ft_swap.o && ranlib libft.a 
