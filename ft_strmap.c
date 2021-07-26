/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdidelot <fdidelot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 19:58:59 by fdidelot          #+#    #+#             */
/*   Updated: 2021/07/26 19:03:00 by fdidelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	int		i;
	char	*new;

	if (s == NULL)
		return (NULL);
	if (f == NULL)
		return (ft_strdup(s));
	new = ft_strnew(ft_strlen(s));
	if (!new)
		return (NULL);
	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			new[i] = (*f)(s[i]);
			i++;
		}
	}
	return (new);
}
