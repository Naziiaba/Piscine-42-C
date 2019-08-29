/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naidyral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 19:54:01 by naidyral          #+#    #+#             */
/*   Updated: 2019/08/15 20:02:20 by naidyral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar (char c);

int		main (int argc, char **argv)
{
		int    i;
		int    z;
    
	i = argc - 1;
	z = 0;
	while (i > 0)
	{
		while (argv[i][z])
		{
			ft_putchar(argv[i][z]);
			z++;
		}
		ft_putchar('\n');
		z = 0;
		i--;
	}
	return (0);
}
