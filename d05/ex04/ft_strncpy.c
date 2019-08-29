/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naidyral <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 16:02:45 by naidyral          #+#    #+#             */
/*   Updated: 2019/08/13 22:56:30 by naidyral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strncpy (char *dest, char *src, unsigned int n)
{	
		unsigned	i;
		int			size;

		size = 0;
		i = 0;
		while (i < n && src[i]) 
		{
				dest[i] = src[i];
				i++;
		}
		while (i < n) 
		{
				dest[i] = '\0';
				i++;
		}
		return (dest);
}

