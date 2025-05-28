/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:47:21 by mouahman          #+#    #+#             */
/*   Updated: 2025/02/06 09:14:58 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **stack, int which)
{
	t_list	*last;
	t_list	*second_last;
	int		size;

	if (!stack)
		return ;
	last = ft_lstlast(*stack);
	size = ft_lstsize(*stack);
	if (!last)
		return ;
	if (size <= 2)
		return (swap(stack, -1));
	second_last = *stack;
	while (second_last->next->next)
		second_last = second_last->next;
	second_last->next = NULL;
	last->next = *stack;
	*stack = last;
	if (which == 0)
		ft_putendl_fd("rra", 1);
	else if (which == 1)
		ft_putendl_fd("rrb", 1);
}
