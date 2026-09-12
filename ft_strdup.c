#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	length_s;
	size_t	i;

	i = 0;
	length_s = ft_strlen(s);
	copy = malloc(length_s + 1);
	if (copy == NULL)
		return (NULL);
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
