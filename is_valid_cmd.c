/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_cmd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:39:21 by mouahman          #+#    #+#             */
/*   Updated: 2025/02/04 21:59:37 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	is_valid_cmd(char *cmd)
{
	char	*valid;

	valid = "pa\npb\nsa\nsb\nss\nra\nrb\nrr\nrra\nrrb\nrrr\n";
	if (!ft_strnstr(valid, cmd, ft_strlen(valid)) || ft_strlen(cmd) < 3)
		return (0);
	return (1);
}
