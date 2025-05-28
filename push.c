/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 11:54:07 by mouahman          #+#    #+#             */
/*   Updated: 2025/02/06 09:07:37 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **to, t_list **from, int which)
{
	t_list	*new;
	t_list	*ptr;
	int		*content;

	if (!from)
		return ;
	ptr = *from;
	if (!ptr)
		return ;
	content = malloc(sizeof(int));
	*content = *(int *)ptr->content;
	if (!content)
		return ;
	new = ft_lstnew(content);
	if (!new)
		return (free(content), ft_lstclear(to, free));
	ft_lstadd_front(to, new);
	pop(from);
	if (which == 1)
		ft_putendl_fd("pb", 1);
	else if (which == 0)
		ft_putendl_fd("pa", 1);
}
