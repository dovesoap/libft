/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdovidio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 20:45:08 by kdovidio          #+#    #+#             */
/*   Updated: 2018/02/07 21:06:26 by kdovidio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *s)
{
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		if (ft_islower(s[i]) && (i == 0 || ft_isalnum(s[i - 1]) == 0))
			s[i] = s[i] - 32;
		else
		{
			if (ft_isupper(s[i]) && ft_isalnum(s[i - 1]))
				s[i] = s[i] + 32;
		}
		i++;
	}
	s[i] = '\0';
	return (s);
}
