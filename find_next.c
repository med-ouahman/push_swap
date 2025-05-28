/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_next.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 20:51:47 by mouahman          #+#    #+#             */
/*   Updated: 2025/01/31 09:09:15 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_prev(t_list *b, int n)
{
	int	prev;

	while (b && *(int *)b->content > n)
		b = b->next;
	if (!b)
		return (n);
	prev = *(int *)b->content;
	while (b)
	{
		if (*(int *)b->content < n && *(int *)b->content > prev)
			prev = *(int *)b->content;
		b = b->next;
	}
	return (prev);
}

int	find_next(t_list *a, int n)
{
	int	next;
	int	content;

	while (a && *(int *)a->content < n)
		a = a->next;
	if (!a)
		return (n);
	next = *(int *)a->content;
	while (a)
	{
		content = *(int *)a->content;
		if (content > n && content < next)
			next = content;
		a = a->next;
	}
	return (next);
}
