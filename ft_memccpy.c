/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdovidio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 17:02:29 by kdovidio          #+#    #+#             */
/*   Updated: 2018/02/06 15:30:51 by kdovidio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*car;
	unsigned char	*car2;

	i = 0;
	car = (unsigned char*)src;
	car2 = (unsigned char*)dst;
	while (i < n)
	{
		car2[i] = (unsigned char)car[i];
		if (car[i] == (unsigned char)c)
			return (&car2[i + 1]);
		i++;
	}
	return (NULL);
}
