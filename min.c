/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:07:43 by mouahman          #+#    #+#             */
/*   Updated: 2025/01/31 09:03:06 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min(t_list *a, t_list *b)
{
	int	min_a;
	int	min_b;

	min_a = min_of(a);
	min_b = min_of(b);
	if (min_a < min_b)
		return (min_a);
	return (min_b);
}
