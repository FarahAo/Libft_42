/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabo-ome <fabo-ome@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 17:39:47 by fabo-ome          #+#    #+#             */
/*   Updated: 2026/09/19 12:22:48 by fabo-ome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	size_t	end_start(size_t start, const char *s1, const char *set)
{
	size_t	size;
	size_t	end;

	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[end]))
		end--;
	if (start > end)
		size = 0;
	else
		size = end - start + 1;
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		i;
	size_t		size;
	char		*copy;

	start = 0;
	if (ft_strlen(s1) == 0)
		size = 0;
	else
	{
		while (ft_strchr(set, s1[start]))
			start++;
		size = end_start(start, s1, set);
	}
	copy = malloc(size + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < size)
	{
		copy[i] = s1[start + i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
