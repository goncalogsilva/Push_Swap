/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncalogsilva <goncalogsilva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:35:29 by goncalogsil       #+#    #+#             */
/*   Updated: 2023/06/14 16:13:33 by goncalogsil      ###   ########.fr       */
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

void    print_list(t_list *list);
t_list	*stack_init(int n, char **args, int *arg);
int		check_mean(t_list **stack);
void    freeList(t_list *stack);

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
void    rrb(t_list **b);
void    rrr(t_list **a, t_list **b);

void    sort2(t_list **stack);
void    sort3(t_list **stack);
void    sort_init(t_list **a, t_list **b);
void    sort_plus(t_list **a, t_list **b);
void    master_sort(t_list **a, t_list **b);

int	    best_friend(t_list **a, int cont);
int     st_cost(t_list *st, int n);
int	    calc_cost(t_list **a, t_list **b, int na, int nb);
int	    check_position(t_list **stack, int nbr);
int	    lst_min(t_list **stack);

void    put_a_up(t_list **st_a, int n);
void    put_b_up(t_list **st_b, int n);
int	    check_sort(t_list **stack);

#endif