/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabo-ome <fabo-ome@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 11:42:22 by fabo-ome          #+#    #+#             */
/*   Updated: 2026/09/09 14:52:15 by fabo-ome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ll(char *dst, const char *src, size_t i, size_t size)
{
	while (i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	length;
	size_t	i;

	length = 0;
	i = 0;
	while (src[length])
	{
		length++;
	}
	if (size > length)
	{
		while (i < length)
		{
			dst [i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	else if (size <= length && size > 0)
	{
		dst = ll(dst, src, i, size);
	}
	return (length);
}
