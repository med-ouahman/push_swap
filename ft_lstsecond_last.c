/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsecond_last.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 20:09:05 by mouahman          #+#    #+#             */
/*   Updated: 2025/01/31 09:02:51 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstsecond_last(t_list *stack)
{
	t_list	*ptr;

	ptr = stack;
	if (!ptr)
		return (NULL);
	while (ptr && ptr->next && ptr->next->next)
		ptr = ptr->next;
	return (ptr);
}
