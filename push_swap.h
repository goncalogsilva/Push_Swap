/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:35:29 by goncalogsil       #+#    #+#             */
/*   Updated: 2023/05/10 11:35:12 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include "libft.h"
# include "ft_printf.h"

void	print_list(t_list *list);
t_list	*stack_init(int n, char **args);
int		check_mean(t_list *stack);

int		check_num(int n, char **args);
int		check_int(int n, char **args);
int		check_dup(int n, char **args);
int		check_args(int n, char **args);

void	swap(t_list **stack);
void	push(t_list **stack_s, t_list **stack_d);
void	rotate(t_list **stack);
void	r_rotate(t_list **stack);

void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

void	sort2(t_list **stack);
void	sort3(t_list **stack);
void	sort_plus(t_list **a, t_list **b);

#endif