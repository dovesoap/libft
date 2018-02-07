/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdovidio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 20:41:14 by kdovidio          #+#    #+#             */
/*   Updated: 2018/02/07 20:50:09 by kdovidio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlowcase(char *s)
{
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		if (ft_isupper(s[i]))
			s[i] = s[i] + 32;
		i++;
	}
	s[i] = '\0';
	return (s);
}