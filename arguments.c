/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:17:49 by mouahman          #+#    #+#             */
/*   Updated: 2025/02/04 10:21:45 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_words(int ac, char **av)
{
	int	wc;
	int	i;

	wc = 0;
	i = 0;
	while (i < ac)
	{
		if (ft_strlen(av[i]) == 0)
			return (-1);
		wc += count_words(av[i], ' ');
		i++;
	}
	return (wc);
}

static int	fill_args(char **args, int ac, char **av)
{
	char	**words;
	int		wc;
	int		j;
	int		k;
	int		i;

	i = 0;
	k = 0;
	while (i < ac)
	{
		j = 0;
		words = ft_split(av[i], ' ');
		wc = count_words(av[i], ' ');
		if (!words || !wc)
			return (clear(args, k), 1);
		while (j < wc)
		{
			args[k] = words[j];
			j++;
			k++;
		}
		i++;
		free(words);
	}
	return (args[k] = NULL, 0);
}

t_list	*get_the_arguments(int ac, char **av)
{
	int		argc;
	char	**args;
	t_list	*nums;

	argc = get_words(ac, av);
	if (argc < 0)
		return (NULL);
	args = malloc((argc + 1) * sizeof(char *));
	if (!args)
		return (NULL);
	if (fill_args(args, ac, av) == 1)
		return (NULL);
	nums = get_numbers(argc, args);
	clear(args, argc);
	if (!nums)
		return (NULL);
	return (nums);
}
