/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabo-ome <fabo-ome@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:40:25 by fabo-ome          #+#    #+#             */
/*   Updated: 2026/09/10 17:03:08 by fabo-ome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	*p;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			p = (char *)&str[i];
		i++;
	}
	if (str[i] == c)
		return ((char *)&str[i]);
	return (p);
}
