/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 20:04:45 by mouahman          #+#    #+#             */
/*   Updated: 2025/02/06 11:19:29 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static	void	execute_operation(t_list **a, t_list **b, char *opt)
{
	size_t	len;

	len = ft_strlen(opt);
	if (!ft_strncmp(opt, "pa\n", len))
		push(a, b, -1);
	else if (!ft_strncmp(opt, "pb\n", len))
		push(b, a, -1);
	else if (!ft_strncmp(opt, "sa\n", len))
		swap(a, -1);
	else if (!ft_strncmp(opt, "sb\n", len))
		swap(b, -1);
	else if (!ft_strncmp(opt, "ss\n", len))
		ss(a, b, -1);
	else if (!ft_strncmp(opt, "ra\n", len))
		rotate(a, -1);
	else if (!ft_strncmp(opt, "rb\n", len))
		rotate(b, -1);
	else if (!ft_strncmp(opt, "rr\n", len))
		rr(a, b, -1);
	else if (!ft_strncmp(opt, "rra\n", len))
		reverse_rotate(a, -1);
	else if (!ft_strncmp(opt, "rrb\n", len))
		reverse_rotate(b, -1);
	else if (!ft_strncmp(opt, "rrr\n", len))
		rrr(a, b, -1);
}

int	check(t_list **a, t_list **b)
{
	char	*opt;

	opt = get_next_line(0);
	while (opt)
	{
		if (!opt && is_sorted(*a, 1) && !*b)
			return (free(opt), 0);
		if (!is_valid_cmd(opt))
			return (free(opt), 1);
		execute_operation(a, b, opt);
		free(opt);
		opt = get_next_line(0);
	}
	if (is_sorted(*a, 1) && !*b)
		return (0);
	return (-1);
}
