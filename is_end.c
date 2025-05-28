/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_end.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:52:19 by mouahman          #+#    #+#             */
/*   Updated: 2025/01/31 09:12:51 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_of(t_list *stack)
{
	int	max;

	max = *(int *)stack->content;
	while (stack)
	{
		if (*(int *)stack->content > max)
			max = *(int *)stack->content;
		stack = stack->next;
	}
	return (max);
}

int	min_of(t_list *stack)
{
	int	min;

	min = *(int *)stack->content;
	while (stack)
	{
		if (*(int *)stack->content < min)
			min = *(int *)stack->content;
		stack = stack->next;
	}
	return (min);
}

int	is_end(t_list *stack, int num)
{
	int	min;
	int	max;

	max = max_of(stack);
	min = min_of(stack);
	if (num > max || num < min)
		return (1);
	return (0);
}
