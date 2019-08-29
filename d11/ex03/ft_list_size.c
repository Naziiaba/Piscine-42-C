/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naidyral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 15:11:35 by naidyral          #+#    #+#             */
/*   Updated: 2019/08/21 15:12:12 by naidyral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			ft_list_size(t_list *head)
{
	int count;

	count = 0;
	while (head)
	{
		head = head->next;
		count++;
	}
	return (count);
}
