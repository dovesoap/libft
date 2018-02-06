/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdovidio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 21:11:38 by kdovidio          #+#    #+#             */
/*   Updated: 2018/02/01 17:26:37 by kdovidio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*conc;
	unsigned int	i;
	unsigned int	j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	j = 0;
	conc = (char*)(malloc(sizeof(*conc) * (ft_strlen(s1) + ft_strlen(s2) + 1)));
	if (conc == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		conc[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		conc[j + i] = s2[i];
		i++;
	}
	conc[j + i] = '\0';
	return (conc);
}
