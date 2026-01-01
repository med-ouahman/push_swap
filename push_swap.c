/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:28:26 by mouahman          #+#    #+#             */
/*   Updated: 2025/02/01 20:49:57 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	if (ac < 2)
		return (0);
	a = get_the_arguments(ac - 1, av + 1);
	if (!a)
		return (ft_putendl_fd("Error", 2), 1);
	if (is_sorted(a, 1))
		return (ft_lstclear(&a, free), 0);
	b = NULL;
	if (sort(&a, &b) == 1)
	{
		double_free(&a, &b);
		ft_putendl_fd("Error", 2);
		return (1);
	}
	if (is_sorted(a, 1)) ft_putendl_fd("a is sorted", 1);
	double_free(&a, &b);
	return (0);
}
