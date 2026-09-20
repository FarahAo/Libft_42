/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabo-ome <fabo-ome@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 10:34:25 by fabo-ome          #+#    #+#             */
/*   Updated: 2026/09/20 14:51:56 by fabo-ome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *np)
{
	int		sign;
	int		ans;
	size_t	i;

	sign = 1;
	ans = 0;
	i = 0;
	while (np[i] == ' ' || np[i] == '\t' || np[i] == '\n'
		|| np[i] == '\v' || np[i] == '\f' || np[i] == '\r')
		i++;
	if (np[i] == '-' || np[i] == '+')
	{
		if (np[i] == '-')
			sign = -1;
		i++;
	}
	while (np[i] >= '0' && np[i] <= '9')
	{
		ans = ans * 10 + (np[i] - '0');
		i++;
	}
	return (ans * sign);
}
