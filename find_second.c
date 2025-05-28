/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_second.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:07:01 by mouahman          #+#    #+#             */
/*   Updated: 2025/02/01 20:48:45 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_second(t_list *a, t_list *b, int min)
{
	int	second;
	int	cnt;

	second = content(a);
	if (second == min)
		a = a->next;
	while (a)
	{
		cnt = content(a);
		if (cnt < second && cnt > min)
			second = cnt;
		a = a->next;
	}
	while (b)
	{
		cnt = content(b);
		if (cnt < second && cnt > min)
			second = cnt;
		b = b->next;
	}
	return (second);
}
