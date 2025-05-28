/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:11:56 by mouahman          #+#    #+#             */
/*   Updated: 2025/01/05 22:54:37 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clear(char **vector, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(vector[i]);
		i++;
	}
	free(vector);
}
