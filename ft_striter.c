/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdovidio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 04:19:37 by kdovidio          #+#    #+#             */
/*   Updated: 2018/02/01 17:15:55 by kdovidio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char*))
{
	unsigned int	len;

	if (s == NULL || f == NULL)
		return ;
	len = ft_strlen(s) - 1;
	while (len + 1)
	{
		f(&s[len]);
		len--;
	}
}
