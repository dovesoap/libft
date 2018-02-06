/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdovidio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 05:34:14 by kdovidio          #+#    #+#             */
/*   Updated: 2018/02/01 17:27:34 by kdovidio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		word_num(char const *s, char c)
{
	unsigned int	i;
	unsigned int	num;

	i = 0;
	num = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			num++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (num);
}

unsigned int		letter_num(char const *s, unsigned int index, char c)
{
	unsigned int	i;

	i = 0;
	while (s[index + i] != c && s[index + i] != '\0')
		i++;
	return (i);
}

char				**ft_strsplit(char const *s, char c)
{
	char			**tab;
	unsigned int	word;
	unsigned int	index;

	if (s == NULL)
		return (NULL);
	word = 0;
	index = 0;
	tab = (char**)(malloc(sizeof(*tab) * (word_num(s, c) + 1)));
	if (tab == NULL)
		return (NULL);
	while (s[index] && word < word_num(s, c))
	{
		while (s[index] == c && s[index] != '\0')
			index++;
		tab[word] = ft_strsub(s, index, letter_num(s, index, c));
		if (tab[word] == NULL)
			return (NULL);
		index = index + letter_num(s, index, c);
		word++;
	}
	tab[word] = NULL;
	return (tab);
}
