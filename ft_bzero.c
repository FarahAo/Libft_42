#include "libft.h"

void	ft_bezero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (n)
	{
		p[i] = 0;
		n--;
		i++;
	}
}
