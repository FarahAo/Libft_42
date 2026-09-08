/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabo-ome <fabo-ome@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 16:56:35 by fabo-ome          #+#    #+#             */
/*   Updated: 2026/09/08 19:51:06 by fabo-ome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 1;
	if (s < d && d <= s + n - 1)
	{
		while (n >= i)
		{
			dec[n - i] = src[n - i];
			i++;
		}
	}
	else
		i = 0;
	while (n)
	{
		d[i] = s[i]
			i++;
		n--;
	}
}
