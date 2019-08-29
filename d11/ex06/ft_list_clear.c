/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naidyral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 16:05:56 by naidyral          #+#    #+#             */
/*   Updated: 2019/08/21 16:06:37 by naidyral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void		ft_list_clear(t_list **phead)
{
	t_list		*prev;

	while (*phead)
	{
		prev = *phead;
		*phead = (*phead)->next;
		free(prev);
	}
}
