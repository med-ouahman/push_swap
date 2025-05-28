/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 22:33:12 by mouahman          #+#    #+#             */
/*   Updated: 2025/02/06 09:15:24 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	handle_rest(t_list **a, t_list **b, char *operation);

void	execute(t_list **a, t_list **b, t_list *operations)
{
	while (operations)
	{
		if (!ft_strncmp(operations->content, "rrr", 3))
			rrr(a, b, 1);
		else if (!ft_strncmp(operations->content, "rra", 3))
			reverse_rotate(a, 0);
		else if (!ft_strncmp(operations->content, "rrb", 3))
			reverse_rotate(b, 1);
		else if (!ft_strncmp(operations->content, "rr", 2))
			rr(a, b, 1);
		else if (!ft_strncmp(operations->content, "ra", 2))
			rotate(a, 0);
		else if (!ft_strncmp(operations->content, "rb", 2))
			rotate(b, 1);
		else if (!ft_strncmp(operations->content, "ss", 2))
			ss(a, b, 1);
		else if (!ft_strncmp(operations->content, "sa", 2))
			swap(a, 0);
		else if (!ft_strncmp(operations->content, "sb", 2))
			swap(b, 1);
		handle_rest(a, b, operations->content);
		operations = operations->next;
	}
}

static void	handle_rest(t_list **a, t_list **b, char *operation)
{
	if (!ft_strncmp(operation, "pa", 2))
		push(a, b, 0);
	else if (!ft_strncmp(operation, "pb", 2))
		push(b, a, 1);
}
