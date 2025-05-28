/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_command.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:00:53 by mouahman          #+#    #+#             */
/*   Updated: 2025/01/31 09:12:40 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	add_command(t_list **operations, char *command)
{
	t_list	*new;
	void	*content;

	content = ft_strdup(command);
	if (!content)
		return (ft_lstclear(operations, free), 1);
	new = ft_lstnew(content);
	if (!new)
		return (ft_lstclear(operations, free), free(content), 1);
	ft_lstadd_back(operations, new);
	return (0);
}
