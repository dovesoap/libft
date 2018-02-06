/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdovidio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 12:11:16 by kdovidio          #+#    #+#             */
/*   Updated: 2018/01/25 13:43:25 by kdovidio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long	i;
	unsigned char	*car;

	i = 0;
	car = (unsigned char*)b;
	while (i < len)
	{
		car[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
