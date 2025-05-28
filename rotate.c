/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:18:02 by mouahman          #+#    #+#             */
/*   Updated: 2025/02/06 09:07:19 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **stack, int which)
{
	t_list	*last;
	t_list	*tmp;

	last = ft_lstlast(*stack);
	if (!last)
		return ;
	tmp = (*stack)->next;
	last->next = *stack;
	(*stack)->next = NULL;
	*stack = tmp;
	if (which == 0)
		ft_putendl_fd("ra", 1);
	else if (which == 1)
		ft_putendl_fd("rb", 1);
}
