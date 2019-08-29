/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naidyral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:17:43 by naidyral          #+#    #+#             */
/*   Updated: 2019/08/13 18:08:28 by naidyral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr (char *str, char *to_find)
{

		int 	i;
		int 	b;
		int 	to_find_size;


		i = 0;
		b = 0;
		to_find_size = 0;
		while (to_find[to_find_size])
				to_find_size++;
		if (to_find_size == 0)
			return (str);
		while (str[i])
		{
			while (to_find[b] == str[i + b])
			{	
				if (b == to_find_size - 1)i
					return (str + i);
				b++;
			}
			b = 0;
			i++;

		}
		return (0);
}
