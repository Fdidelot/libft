/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdidelot <fdidelot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 09:44:44 by maviot            #+#    #+#             */
/*   Updated: 2021/07/26 18:55:38 by fdidelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_range(int min, int max)
{
	int		i;
	int		*tab;
	int		diff;

	if (min >= max)
		return (NULL);
	diff = (max - min);
	tab = (int *)malloc(sizeof(int) * diff + 1);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	tab[i] = 0;
	return (tab);
}
