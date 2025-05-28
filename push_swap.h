/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouahman <mouahman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 11:35:12 by mouahman          #+#    #+#             */
/*   Updated: 2025/02/06 09:15:34 by mouahman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

typedef struct s_pairs
{
	int	current;
	int	prev;
}	t_pairs;

long	ft_atol(char *s);
int		contains(t_list *seen, int el);
int		only_digits(char *s);
void	clear(char **vector, int count);
t_list	*get_the_arguments(int ac, char **av);
t_list	*get_numbers(int ac, char **av);
int		is_sorted(t_list *stack, int order);
void	push(t_list **to, t_list **from, int which);
void	swap(t_list **stack, int which);
void	reverse_rotate(t_list **stack, int which);
void	rotate(t_list **stack, int which);
void	pop(t_list **stack);
void	print(t_list *stack1, t_list *stack2);
int		sort(t_list **b, t_list **a);
t_list	*ft_lstsecond_last(t_list *stack);
void	ss(t_list **a, t_list **b, int opt);
void	rr(t_list **a, t_list **b, int opt);
void	rrr(t_list **a, t_list **b, int opt);
void	sort_three(t_list **a);
int		is_end(t_list *stack, int num);
int		find_closest_end(t_list *stack, int n);
int		find_prev(t_list *b, int n);
int		find_second(t_list *a, t_list *b, int min);
int		add_command(t_list **operations, char *command);
int		do_rr(t_list *a, t_list *b, t_list **operations, t_pairs pairs);
int		do_rarrb(t_list *a, t_list *b, t_list **operations, t_pairs pairs);
int		do_rrarb(t_list *a, t_list *b, t_list **operations, t_pairs pairs);
int		do_rrr(t_list *a, t_list *b, t_list **operations, t_pairs pairs);
void	execute(t_list **a, t_list **b, t_list *operations);
int		find_cheapest(t_list **a, t_list **b);
int		content(t_list *ptr);
int		find_next(t_list *a, int n);
void	push_back(t_list **a, t_list **b);
int		max_of(t_list *stack);
int		min_of(t_list *stack);
void	rotate_min(t_list **a);
t_list	*get_operations(t_list *a, t_list *b, int current);
t_list	*get_min_opts(t_list *a, t_list *b);
t_list	*get_new_opts(t_list **opts, t_list **min_opts);
int		min(t_list *a, t_list *b);
void	double_free(t_list **ptr1, t_list **ptr2);

#endif