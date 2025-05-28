/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 10:39:20 by mouahman          #+#    #+#             */
/*   Updated: 2025/02/04 11:41:33 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	int		c;

	if (ac < 2)
		return (0);
	a = get_the_arguments(ac - 1, av + 1);
	if (!a)
		return (ft_putendl_fd("Error", 2), 1);
	b = NULL;
	c = check(&a, &b);
	if (c == 1)
		return (double_free(&a, &b), ft_putendl_fd("Error", 2), 1);
	if (c == -1)
		return (double_free(&a, &b), ft_putendl_fd("KO", 1), 1);
	ft_putendl_fd("OK", 1);
	double_free(&a, &b);
	return (0);
}
