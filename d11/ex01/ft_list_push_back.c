/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naidyral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 14:51:12 by naidyral          #+#    #+#             */
/*   Updated: 2019/08/21 14:59:29 by naidyral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void		ft_list_push_back(t_list **ptr_head, void *data)
{
	t_list		*cursor;

	if (*ptr_head)
	{
		cursor = *ptr_head;
		while (cursor->next)
		{
			cursor = cursor->next;
		}
		cursor->next = ft_create_elem(data);
	}
	else
		*ptr_head = ft_create_elem(data);
}
