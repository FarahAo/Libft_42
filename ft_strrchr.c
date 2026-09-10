#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*p;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			p = &str[i];
		i++;
	}
	if (str[i] == c)
		return (&str[i]);
	return (p);
}
