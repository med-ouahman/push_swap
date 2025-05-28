/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 11:58:25 by mouahman          #+#    #+#             */
/*   Updated: 2025/02/06 09:07:03 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack, int which)
{
	t_list	*head;
	t_list	*next;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	head = *stack;
	next = head->next;
	head->next = next->next;
	next->next = head;
	*stack = next;
	if (which == 0)
		ft_putendl_fd("sa", 1);
	else if (which == 1)
		ft_putendl_fd("sb", 1);
}
