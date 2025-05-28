/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_closest_end.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 20:42:31 by mouahman          #+#    #+#             */
/*   Updated: 2025/01/31 09:07:58 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_closest_end(t_list *stack, int n)
{
	int	size;
	int	distance;

	size = ft_lstsize(stack);
	distance = 0;
	while (stack && *(int *)stack->content != n)
	{
		distance++;
		stack = stack->next;
	}
	return (distance <= (size / 2));
}
