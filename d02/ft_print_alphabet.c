/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naidyral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 08:44:15 by naidyral          #+#    #+#             */
/*   Updated: 2019/08/08 22:18:35 by naidyral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void ft_print_alphabet(void)
{
	char ch='a';

	ch = 'a';
	while(ch <= 'z')
	{
		ft_putchar(ch);
		ch++;
	}
}
