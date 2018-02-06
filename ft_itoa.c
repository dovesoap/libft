/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdovidio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 02:01:29 by kdovidio          #+#    #+#             */
/*   Updated: 2018/01/29 18:32:05 by kdovidio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		int_len(int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static char		*min_neg(void)
{
	return (ft_strcpy(ft_strnew(int_len(-2147483648)), "-2147483648"));
}

char			*ft_itoa(int n)
{
	char			*s;
	unsigned int	len;

	len = int_len(n);
	s = (char*)(malloc(sizeof(*s) * ((len + 1))));
	if (s == NULL)
		return (NULL);
	s[len] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		n = n * -1;
	}
	if (n == -2147483648)
		return (min_neg());
	if (n == 0)
		s[0] = '0';
	while (n != 0)
	{
		s[len - 1] = ((n % 10) + '0');
		n = n / 10;
		len--;
	}
	return (s);
}
