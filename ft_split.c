/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabo-ome <fabo-ome@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 16:21:51 by fabo-ome          #+#    #+#             */
/*   Updated: 2026/09/13 19:32:22 by fabo-ome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while(s[i])
	{
		if (s[i] != c && i == 0)
			count++;
		else if (s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}
static	size_t	word_length(char const *s, char c, size_t start)
{
	size_t	length;

	length = 0;
	while (s[start + length] != c && s[start + length] != '\0')
		length++;
	return (length);

}


	
char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*word;
	size_t	count;
	size_t	i;
	size_t word_l;

	i = 0;
	count = count_words(s, c);
	result = malloc((count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (s[i])
	{
		if(s[i] != c && i == 0)
			word_l = word_length(s,c,i);
		else if (s[i] != c && s[i - 1] == c)
			   word_l = word_length(s,c,i);
		i++;
	}
	word = malloc((word_l + 1) * sizeof(char));
		if (!word)
			return (NULL);
	i = 0;

	
}
