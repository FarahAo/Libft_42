/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabo-ome <fabo-ome@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 14:45:34 by fabo-ome          #+#    #+#             */
/*   Updated: 2026/09/20 15:07:51 by fabo-ome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	length(long n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	len;
	long	c;

	c = n;
	len = length(c);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (c < 0)
	{
		s[0] = '-';
		c = -c;
	}
	if (c == 0)
		s[0] = '0';
	while (c)
	{
		s[--len] = (c % 10) + '0';
		c = c / 10;
	}
	return (s);
}
