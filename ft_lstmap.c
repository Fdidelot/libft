/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdidelot <fdidelot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 18:39:57 by fdidelot          #+#    #+#             */
/*   Updated: 2021/07/26 18:53:38 by fdidelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*map;
	t_list	*new;
	t_list	*tmp;

	if (lst == NULL || f == NULL)
		return (NULL);
	map = f(lst);
	tmp = map;
	lst = lst->next;
	while (lst)
	{
		new = f(lst);
		if (!new)
			return (NULL);
		tmp->next = new;
		tmp = new;
		lst = lst->next;
	}
	return (map);
}
