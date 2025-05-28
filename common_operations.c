/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 20:44:33 by mouahman          #+#    #+#             */
/*   Updated: 2025/02/06 09:13:17 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_list **a, t_list **b, int opt)
{
	swap(a, -1);
	swap(b, -1);
	if (opt == 1)
		ft_putendl_fd("ss", 1);
}

void	rr(t_list **a, t_list **b, int opt)
{
	rotate(a, -1);
	rotate(b, -1);
	if (opt == 1)
		ft_putendl_fd("rr", 1);
}

void	rrr(t_list **a, t_list **b, int opt)
{
	reverse_rotate(a, -1);
	reverse_rotate(b, -1);
	if (opt == 1)
		ft_putendl_fd("rrr", 1);
}
