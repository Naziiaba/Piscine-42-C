/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naidyral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 19:04:20 by naidyral          #+#    #+#             */
/*   Updated: 2019/08/15 19:51:37 by naidyral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

void ft_putstr (char *str);
{	
	while (*str)
	{
		ft_putchar (*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
		int i;
		i = 1;
		while (i < argc) 
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
		return (0);
}
