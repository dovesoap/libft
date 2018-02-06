/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdovidio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 20:14:36 by kdovidio          #+#    #+#             */
/*   Updated: 2018/01/25 20:24:02 by kdovidio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;
	int		size_alloc;

	size_alloc = sizeof(*s) * (size + 1);
	s = (char*)malloc(size_alloc);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, size_alloc);
	return (s);
}
