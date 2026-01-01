/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:06:24 by mouahman          #+#    #+#             */
/*   Updated: 2025/02/08 11:34:31 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sofrt(t_list **b, t_list **a)
{
	if (ft_lstsize(*a) == 2 && !is_sorted(*a, 1))
		return (swap(a, 0), 0);
	if (ft_lstsize(*a) == 3 && !*b)
		return (sort_three(a), 0);
	if (!*b)
	{
		push(b, a, 1);
		if (ft_lstsize(*a) == 3)
			return (sort_three(a), push_back(a, b), 0);
		push(b, a, 1);
		if (!is_sorted(*b, 0) && is_end(*b, content(*a)))
			rotate(b, 1);
	}
	if (ft_lstsize(*a) == 3)
		sort_three(a);
	if (is_sorted(*a, 1))
		return (push_back(a, b), 0);
	if (find_cheapest(a, b) == 1)
		return (1);
	return (sort(b, a));
}

int	sort(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) == 3)
	{
		sort_three(a);
		return 0l;
	}
	if (!*b)
	{
		push(b, a, 1);
		if (ft_lstsize(*a) == 3)
		{
			sort_three(a);
			push_back(a, b);
			return 0;
		}
		push(b, a, 1);
		if (!is_sorted(*b, 0) &&  is_end(*b, *(int *)(*a)->content))
			rotate(b, 1);
	}
	while (1)
	{
		if (ft_lstsize(*a) == 2 && !is_sorted(*a, 1))
		{
			swap(a, 0);
			break;
		}
		if (ft_lstsize(*a) == 3)
			sort_three(a);
		if (is_sorted(*a, 1))
		{
			push_back(a, b);
			break;
		}
		if (find_cheapest(a, b))
			return 1;
	}
	return 0;
}

void	rotate_min(t_list **a)
{
	int	min;
	int	end;

	min = min_of(*a);
	end = find_closest_end(*a, min);
	if (end)
	{
		while (min != content(*a))
			rotate(a, 0);
	}
	else
	{
		while (min != content(*a))
			reverse_rotate(a, 0);
	}
}

void	push_back(t_list **a, t_list **b)
{
	int	next;
	int	b_end;
	int	min_both;

	if (!*b)
		return (rotate_min(a));
	min_both = min(*a, *b);
	if (content(ft_lstlast(*a)) == min_both)
	{
		if (find_second(*a, *b, min_both) == content(*a))
			return (reverse_rotate(a, 0), push_back(a, b));
	}
	next = find_next(*a, content(*b));
	if (content(*b) == next)
		next = min_of(*a);
	b_end = find_closest_end(*a, next);
	if (b_end)
		while (content(*a) != next)
			rotate(a, 0);
	else
		while (content(*a) != next)
			reverse_rotate(a, 0);
	push(a, b, 0);
	push_back(a, b);
}
