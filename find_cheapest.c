/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cheapest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:06:45 by mouahman          #+#    #+#             */
/*   Updated: 2025/02/06 09:16:02 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_cheapest(t_list **a, t_list **b)
{
	t_list	*min_opts;

	min_opts = get_min_opts(*a, *b);
	if (!min_opts)
		return (1);
	execute(a, b, min_opts);
	ft_lstclear(&min_opts, free);
	return (0);
}
