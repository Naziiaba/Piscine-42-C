/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naidyral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 18:45:24 by naidyral          #+#    #+#             */
/*   Updated: 2019/08/15 19:03:01 by naidyral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar (char c);

int 	main (int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 1)
	{
		while (argv[0][i])
			ft_putchar(argv[0][i++]);
		ft_putchar('\n');
	}
	return (0);
}
