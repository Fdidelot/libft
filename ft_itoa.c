/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdidelot <fdidelot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 15:04:19 by fdidelot          #+#    #+#             */
/*   Updated: 2021/07/26 18:48:55 by fdidelot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_length(int n, size_t *len)
{
	*len = 1;
	if (n > 0)
	{
		*len = 0;
		n *= -1;
	}
	while (n != 0)
	{
		n /= 10;
		*len += 1;
	}
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	i;
	char	*str;

	ft_length(n, &len);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	if (n > 0)
		n *= -1;
	while (n != 0)
	{
		str[len - i++ - 1] = -(n % 10) + '0';
		n /= 10;
	}
	str[len] = '\0';
	return (str);
}
