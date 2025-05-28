/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:52:44 by mouahman          #+#    #+#             */
/*   Updated: 2025/01/14 08:56:39 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pop(t_list **stack)
{
	t_list	*ptr;

	ptr = *stack;
	if (!ptr)
		return ;
	*stack = ptr->next;
	ft_lstdelone(ptr, free);
}
