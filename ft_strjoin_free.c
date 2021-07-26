/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdidelot <fdidelot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 03:12:26 by fdidelot          #+#    #+#             */
/*   Updated: 2021/07/26 19:01:08 by fdidelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char const *s1, char const *s2, int k)
{
	char	*join;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	join = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!join)
		return (NULL);
	i = -1;
	j = 0;
	while (s1[++i])
		join[i] = s1[i];
	while (s2[j])
	{
		join[i + j] = s2[j];
		j++;
	}
	if (k > 0)
	{
		free((void *)s1);
		if (k > 1)
			free((void *)s2);
	}
	return (join);
}
