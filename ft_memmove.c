/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdovidio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 15:19:09 by kdovidio          #+#    #+#             */
/*   Updated: 2018/02/06 15:31:02 by kdovidio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_p;
	char const	*src_p;
	size_t		i;

	i = 0;
	dst_p = (char*)dst;
	src_p = (const char*)src;
	if (&dst_p[0] < &src_p[0])
	{
		while (i < len)
		{
			dst_p[i] = src_p[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			i--;
			dst_p[i] = src_p[i];
		}
	}
	return (dst);
}
