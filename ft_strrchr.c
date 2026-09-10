#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	*p;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			p = &(char *)str[i];
		i++;
	}
	if (str[i] == c)
		return (&(char *)str[i]);
	return (p);
}
