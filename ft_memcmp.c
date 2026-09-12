#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p;
	const unsigned char	*c;
	size_t				i;

	p = (const unsigned char *)s1;
	c = (const unsigned char *)s2;
	i = 0;
	while (i < n && p[i] == c[i])
		i++;
	if (i == n)
		return (0);
	return (p[i] - c[i]);
}
