/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 20:37:50 by mouahman          #+#    #+#             */
/*   Updated: 2025/01/24 09:16:36 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	cmp(int a, int b, int order)
{
	if (order == 1)
		return (a > b);
	return (b > a);
}

int	is_sorted(t_list *stack, int order)
{
	t_list	*ptr;

	ptr = stack;
	while (ptr && ptr->next)
	{
		if (cmp(*(int *)ptr->content, *(int *)ptr->next->content, order))
			return (0);
		ptr = ptr->next;
	}
	return (1);
}
