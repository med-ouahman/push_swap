/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:50:11 by mouahman          #+#    #+#             */
/*   Updated: 2025/02/06 09:22:00 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

long	ft_atol(char *s)
{
	long	result;
	long	sign;
	size_t	i;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(s[i]) && s[i])
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(s[i]) && s[i])
	{
		if (result > INT_MAX || (result * sign) < INT_MIN)
			return (2147483648);
		result = result * 10 + s[i] - 48;
		i++;
	}
	return (result * sign);
}
