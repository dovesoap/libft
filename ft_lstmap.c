/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdovidio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 17:47:48 by kdovidio          #+#    #+#             */
/*   Updated: 2018/02/07 19:32:34 by kdovidio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lst_new;

	if (lst)
	{
		lst_new = f(lst);
		if (lst->next)
			lst_new->next = ft_lstmap(lst->next, f);
		return (lst_new);
	}
	return (NULL);
}
