/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdovidio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 14:24:12 by kdovidio          #+#    #+#             */
/*   Updated: 2018/01/25 14:31:02 by kdovidio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*cars1;
	unsigned char	*cars2;

	i = 0;
	cars1 = (unsigned char*)s1;
	cars2 = (unsigned char*)s2;
	while (i < n)
	{
		if (cars1[i] != cars2[i])
			return (cars1[i] - cars2[i]);
		i++;
	}
	return (0);
}
