/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_operations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 09:14:13 by mouahman          #+#    #+#             */
/*   Updated: 2025/02/06 09:19:21 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*get_operations(t_list *a, t_list *b, int current)
{
	t_list	*operations;
	int		a_end;
	int		b_end;
	int		code;
	t_pairs	pairs;

	pairs = (t_pairs ){ .current = current, .prev = find_prev(b, current)};
	if (is_end(b, current))
		pairs.prev = max_of(b);
	operations = NULL;
	a_end = find_closest_end(a, current);
	b_end = find_closest_end(b, pairs.prev);
	if (a_end && b_end)
		code = do_rr(a, b, &operations, pairs);
	else if (a_end && !b_end)
		code = do_rarrb(a, b, &operations, pairs);
	else if (!a_end && b_end)
		code = do_rrarb(a, b, &operations, pairs);
	else
		code = do_rrr(a, b, &operations, pairs);
	if (code == 1 || add_command(&operations, "pb") == 1)
		return (ft_lstclear(&operations, free), NULL);
	return (operations);
}

t_list	*get_min_opts(t_list *a, t_list *b)
{
	t_list	*min_opts;
	t_list	*opts;
	t_list	*ptr;

	ptr = a;
	min_opts = get_operations(a, b, content(ptr));
	ptr = ptr->next;
	while (ptr)
	{
		opts = get_operations(a, b, content(ptr));
		if (!opts || !min_opts)
			return (double_free(&opts, &min_opts), NULL);
		min_opts = get_new_opts(&opts, &min_opts);
		ptr = ptr->next;
	}
	return (min_opts);
}

t_list	*get_new_opts(t_list **opts, t_list **min_opts)
{
	int	min;
	int	count;

	min = ft_lstsize(*min_opts);
	if (min == 1)
		return (ft_lstclear(opts, free), *min_opts);
	count = ft_lstsize(*opts);
	if (count < min)
	{
		ft_lstclear(min_opts, free);
		return (*opts);
	}
	else
		ft_lstclear(opts, free);
	return (*min_opts);
}
