/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabo-ome <fabo-ome@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:40:06 by fabo-ome          #+#    #+#             */
/*   Updated: 2026/09/20 14:13:05 by fabo-ome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (unsigned char)c)
		return ((char *)&str[i]);
	return (NULL);
}
