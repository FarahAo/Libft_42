#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;
	size_t	j;

	little_len = ft_strlen(little);
	j = 0;
	if (little_len == 0)
		return ((char *)&big);
	if (little_len > len)
		return (NULL);
	while (j <= len - little_len && big[j] != '\0')
	{
		i = 0;
		while (big[j + i] == little[i] && i < little_len)
		{
			i++;
		}
		if (i == little_len)
			return ((char *)&big[j]);
		j++;
	}
	return (NULL);
}
