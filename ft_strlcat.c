/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabo-ome <fabo-ome@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 15:44:25 by fabo-ome          #+#    #+#             */
/*   Updated: 2026/09/09 18:23:17 by fabo-ome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	copy_char(char *des, const char *src, size_t d, size_t x)
{
	size_t	i;

	i = 0;
	while (i < x)
	{
		des[d] = src[i];
		i++;
		d++;
	}
	return (d);
}

size_t	ft_strlcat(char *des, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	length;
	size_t	llength;

	d = ft_strlen(des);
	s = ft_strlen(src);
	length = d + s;
	if (size <= d)
		return (length);
	llength = size - d - 1;
	if (llength >= s)
	{
		d = copy_char(des, src, d, s);
		des[d] = '\0';
	}
	else if (llength < s)
	{
		d = copy_char(des, src, d, llength);
		des[d] = '\0';
	}
	return (length);
}
