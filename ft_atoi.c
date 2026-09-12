#include "libft.h"

int	ft_atoi(const char *np)
{
	int		nbr;
	int		sign;
	int		ans;
	size_t	i;

	sign = 1;
	ans = 0;
	i = 0;
	if (np[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (np[i] == '+')
	{
		i++;
	}
	while (np[i])
	{
		nbr = np[i] - '0';
		ans = ans * 10 + nbr;
		i++;
	}
	return (ans * sign);
}
