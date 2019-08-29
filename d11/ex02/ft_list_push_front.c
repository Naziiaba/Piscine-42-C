/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naidyral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 15:05:35 by naidyral          #+#    #+#             */
/*   Updated: 2019/08/21 15:06:03 by naidyral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

/*
** something
** to
** fill
*/

void		ft_list_push_front(t_list **ptr_head, void *data)
{
	t_list		*cur;

	cur = ft_create_elem(data);
	if (*ptr_head == NULL)
		*ptr_head = cur;
	else
	{
		cur->next = *ptr_head;
		*ptr_head = cur;
	}
}
