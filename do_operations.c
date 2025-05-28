/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:45:05 by mouahman          #+#    #+#             */
/*   Updated: 2025/01/31 20:34:40 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	do_rr(t_list *a, t_list *b, t_list **operations, t_pairs pairs)
{
	int	code;

	code = 0;
	while (a && b && content(a) != pairs.current && content(b) != pairs.prev)
	{
		code = add_command(operations, "rr");
		a = a->next;
		b = b->next;
	}
	while (a && content(a) != pairs.current)
	{
		code = add_command(operations, "ra");
		a = a->next;
	}
	while (b && content(b) != pairs.prev)
	{
		code = add_command(operations, "rb");
		b = b->next;
	}
	return (code);
}

int	do_rarrb(t_list *a, t_list *b, t_list **operations, t_pairs pairs)
{
	int	code;

	code = 0;
	while (a && content(a) != pairs.current)
	{
		code = add_command(operations, "ra");
		a = a->next;
	}
	while (b && content(b) != pairs.prev)
		b = b->next;
	while (b)
	{
		code = add_command(operations, "rrb");
		b = b->next;
	}
	return (code);
}

int	do_rrarb(t_list *a, t_list *b, t_list **operations, t_pairs pairs)
{
	int	code;

	code = 0;
	while (a && content(a) != pairs.current)
		a = a->next;
	while (a)
	{
		code = add_command(operations, "rra");
		a = a->next;
	}
	while (b && content(b) != pairs.prev)
	{
		code = add_command(operations, "rb");
		b = b->next;
	}
	return (code);
}

int	do_rrr(t_list *a, t_list *b, t_list **operations, t_pairs pairs)
{
	int	code;

	code = 0;
	while (a && content(a) != pairs.current)
		a = a->next;
	while (b && content(b) != pairs.prev)
		b = b->next;
	while (b && a)
	{
		code = add_command(operations, "rrr");
		a = a->next;
		b = b->next;
	}
	while (a)
	{
		code = add_command(operations, "rra");
		a = a->next;
	}
	while (b)
	{
		code = add_command(operations, "rrb");
		b = b->next;
	}
	return (code);
}
