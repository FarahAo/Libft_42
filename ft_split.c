/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabo-ome <fabo-ome@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 08:24:31 by fabo-ome          #+#    #+#             */
/*   Updated: 2026/09/19 08:27:17 by fabo-ome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static	char	*get_word(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	length_word;
	char	*word;

	i = 0;
	j = 0;
	while (s[i] != c && s[i])
		i++;
	length_word = i;
	word = malloc(length_word + 1);
	if (!word)
		return (NULL);
	while (j < length_word)
	{
		word[j] = s[j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

static char	**free_result(size_t j, char **result)
{
	while (j > 0)
		free(result[--j]);
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**result;
	size_t	j;
	size_t	i;

	j = 0;
	i = 0;
	count = count_word(s, c);
	result = malloc((count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (j < count)
	{
		while (s[i] == c && s[i])
			i++;
		result[j] = get_word(&s[i], c);
		if (!result[j])
			return (free_result(j, result));
		while (s[i] != c && s[i])
			i++;
		j++;
	}
	result[j] = NULL;
	return (result);
}
