/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdovidio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 13:06:29 by kdovidio          #+#    #+#             */
/*   Updated: 2018/02/09 13:06:47 by kdovidio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (ft_isprint(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}