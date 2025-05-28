/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 20:27:13 by mouahman          #+#    #+#             */
/*   Updated: 2025/02/05 09:31:43 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*get_numbers(int ac, char **av)
{
	t_list	*stack;
	t_list	*node;
	int		*content;
	long	n;
	int		i;

	stack = NULL;
	i = 0;
	while (i < ac)
	{
		n = ft_atol(av[i]);
		content = malloc(sizeof(int));
		if (n > INT_MAX || n < INT_MIN || !content
			|| contains(stack, n) || !only_digits(av[i]) || !ft_strlen(av[i]))
			return (ft_lstclear(&stack, free), free(content), NULL);
		*content = n;
		node = ft_lstnew(content);
		if (!node)
			return (ft_lstclear(&stack, free), NULL);
		ft_lstadd_back(&stack, node);
		i++;
	}
	return (stack);
}
