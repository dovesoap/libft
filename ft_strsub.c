/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdovidio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 20:52:50 by kdovidio          #+#    #+#             */
/*   Updated: 2018/02/01 17:23:19 by kdovidio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*tronc;
	unsigned int	i;
	unsigned int	range;

	if (s == NULL)
		return (NULL);
	i = 0;
	range = start;
	tronc = (char *)(malloc(sizeof(*tronc) * (len + 1)));
	if (tronc == NULL)
		return (NULL);
	while (range < (start + len))
	{
		tronc[i] = s[range];
		range++;
		i++;
	}
	tronc[i] = '\0';
	return (tronc);
}
