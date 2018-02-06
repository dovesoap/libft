/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdovidio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 18:05:54 by kdovidio          #+#    #+#             */
/*   Updated: 2018/01/29 14:59:28 by kdovidio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ndle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (*ndle == '\0' && ndle != NULL)
		return ((char*)hay);
	while (hay[i] && i < len)
	{
		j = 0;
		if (hay[i] == ndle[j])
		{
			while (hay[i + j] == ndle[j] && (i + j) < len)
			{
				j++;
				if (ndle[j] == '\0')
					return ((char *)(hay + i));
			}
		}
		i++;
	}
	return (NULL);
}
