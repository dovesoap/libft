/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdovidio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 14:02:28 by kdovidio          #+#    #+#             */
/*   Updated: 2018/01/25 14:12:14 by kdovidio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*swap;
	unsigned char	*swap2;
	unsigned int	i;

	i = 0;
	swap = (unsigned char*)src;
	swap2 = (unsigned char*)dst;
	while (i < n)
	{
		swap2[i] = swap[i];
		i++;
	}
	return (dst);
}
