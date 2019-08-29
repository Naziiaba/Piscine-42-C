/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naidyral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 15:56:05 by naidyral          #+#    #+#             */
/*   Updated: 2019/08/21 15:57:17 by naidyral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list			*ft_list_push_params(int ac, char **av)
{
	t_list		*cursor;
	t_list		*new;
	int			i;

	i = 1;
	cursor = 0;
	while (i < ac)
	{
		new = ft_create_elem(av[i]);
		new->next = cursor;
		cursor = new;
		i++;
	}
	return (cursor);
}
