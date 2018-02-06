/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdovidio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 14:15:11 by kdovidio          #+#    #+#             */
/*   Updated: 2018/01/25 14:23:17 by kdovidio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*car;

	i = 0;
	car = (unsigned char*)s;
	while (i < n)
	{
		if (car[i] == (unsigned char)c)
			return (&car[i]);
		i++;
	}
	return (NULL);
}
