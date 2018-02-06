/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdovidio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 05:07:26 by kdovidio          #+#    #+#             */
/*   Updated: 2018/02/01 17:19:25 by kdovidio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*s2;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	s2 = ft_strdup(s);
	if (s2 == NULL)
		return (NULL);
	while (s2[i])
	{
		s2[i] = f(s[i]);
		i++;
	}
	return (s2);
}
