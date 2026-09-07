#include "libft.h"

int	ft_isalnum(int x)
{
	if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122)
		|| (x >= 48 && x <= 57))
		return (1);
	return (0);
}
