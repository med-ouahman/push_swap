/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:37:55 by mouahman          #+#    #+#             */
/*   Updated: 2025/02/06 09:03:17 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse(t_list **a, int n)
{
	while (n--)
		reverse_rotate(a, 0);
	swap(a, 0);
}

void	sort_three(t_list **a)
{
	int	first;
	int	second;
	int	last;

	if (is_sorted(*a, 1))
		return ;
	if (is_sorted(*a, 0))
		return (rotate(a, 0), swap(a, 0));
	first = *(int *)(*a)->content;
	second = *(int *)(*a)->next->content;
	last = *(int *)ft_lstlast(*a)->content;
	if (first > second && last > second && last > first)
		return (swap(a, 0));
	if (first > second && first > last && last > second)
		return (rotate(a, 0));
	if (second > last && second > first && last > first)
		return (reverse(a, 1));
	if (second > last && second > first)
		return (reverse_rotate(a, 0));
}
