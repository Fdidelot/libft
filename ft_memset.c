/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdidelot <fdidelot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:49:58 by fdidelot          #+#    #+#             */
/*   Updated: 2021/07/26 18:54:43 by fdidelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *m, int n, size_t s)
{
	unsigned char	*tmp;

	if (s == 0)
		return (m);
	tmp = (unsigned char *)m;
	while (s--)
	{
		*tmp = (unsigned char)n;
		tmp++;
	}
	return (m);
}
