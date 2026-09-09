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

size_t	ft_strlcat(char *des, char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	length;
	size_t	i;
	size_t	llength;

	d = ft_strlen(des);
	s = ft_strlen(src);
	length = d + s;
	i = 0;
	if (size <= d)
		return (length);
	llength = size - d - 1;
	if (llength >= s)
	{
		while (i < s)
		{
			des[d] = src[i];
			i++;
			d++;
		}
		des[d] = '\0';
	}
	else if (llength < s)
	{
		while (i < llength)
		{
			des[d] = src[i];
			i++;
			d++;
		}
		des[d] = '\0';
	}
	return (length);
}
