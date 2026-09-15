/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabo-ome <fabo-ome@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 17:27:13 by fabo-ome          #+#    #+#             */
/*   Updated: 2026/09/15 18:03:48 by fabo-ome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	length;

	i = 0;
	length = ft_strlen(s);
	s = malloc(length + 1);
	if (!s)
		return (NULL);
	while (i < length)
	{
		s[i] = f(i, s[i]);
		i++;
	}
	s[i] = '\0';
}
