/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naidyral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 15:49:38 by naidyral          #+#    #+#             */
/*   Updated: 2019/08/21 15:50:25 by naidyral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list				*ft_list_last(t_list *begin_list)
{
	t_list		*cursor;

	cursor = begin_list;
	if (cursor == 0)
		return (0);
	while (cursor->next)
	{
		cursor = cursor->next;
	}
	return (cursor);
}
