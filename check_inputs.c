/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_inputs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:29:47 by mouahman          #+#    #+#             */
/*   Updated: 2025/02/05 09:40:06 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	contains(t_list *seen, int el)
{
	t_list	*ptr;

	ptr = seen;
	while (ptr)
	{
		if (*(int *)ptr->content == el)
			return (1);
		ptr = ptr->next;
	}
	return (0);
}

int	only_digits(char *s)
{
	size_t	i;

	i = 0;
	if ((s[i] == '-' || s[i] == '+') && s[i + 1])
		i++;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

void	print(t_list *stack1, t_list *stack2)
{
	ft_printf("a:\tb:\n\n");
	while (stack1 && stack2)
	{
		ft_printf("|%d|\t|%d|\n",
			*(int *)stack1->content, *(int *)stack2->content);
		stack1 = stack1->next;
		stack2 = stack2->next;
	}
	while (stack1)
	{
		ft_printf("|%d|\t|*|\n", *(int *)stack1->content);
		stack1 = stack1->next;
	}
	while (stack2)
	{
		ft_printf("|*|\t|%d|\n", *(int *)stack2->content);
		stack2 = stack2->next;
	}
}
