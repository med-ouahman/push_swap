/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 22:10:10 by mouahman          #+#    #+#             */
/*   Updated: 2025/01/31 09:03:20 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	double_free(t_list **ptr1, t_list **ptr2)
{
	ft_lstclear(ptr1, free);
	ft_lstclear(ptr2, free);
}
