/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabo-ome <fabo-ome@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 13:34:09 by fabo-ome          #+#    #+#             */
/*   Updated: 2026/09/15 14:21:21 by fabo-ome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static	char	*word_length(char const *s, char c)
{
	size_t	i;
	size_t	len;
	char	*word;
	size_t	start;

	i = 0;
	len = 0;
	while (s[i] && s[i] == c)
		i++;
	start = i;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	word = malloc(len +1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	free_result(char **result, size_t j)
{
	while (j > 0)
		free (result[--j]);
	free (result);
}

static	int	check(char **result, size_t j)
{
	if (!result[j])
	{
		free_result(result, j);
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	result = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			result[j] = word_length(&s[i], c);
			if (!check(result, j))
				return (NULL);
			j++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	result[j] = NULL;
	return (result);
}
