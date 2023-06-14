/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncalogsilva <goncalogsilva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:20:21 by gode-jes          #+#    #+#             */
/*   Updated: 2023/06/14 15:44:22 by goncalogsil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	best_friend(t_list **a, int cont)
{
	long int	dif;
	long int	tmp;
	int			bf;
	int			flag;
	t_list		*st_a;

	st_a = *a;
	dif = LONG_MAX;
	flag = 0;
	while (st_a)
	{
		tmp = (long int) *((st_a)->content) - cont;
		if (tmp > 0 && tmp < dif)
		{
			dif = tmp;
			bf = *((st_a)->content);
			flag = 1;
		}
		st_a = st_a->next;
	}

	if (!flag)
		bf = cont;
	return (bf);
}

int st_cost(t_list *st, int n)
{
	int	cost;
	int	size;

	size = ft_lstsize(st);
	cost = 0;
	while (st)
	{
		if (*((st)->content) == n)
			break ;
		cost++;
		st = st->next;
	}
	if (cost > (size / 2))
		cost = size - cost;
	return (cost);
}

int	calc_cost(t_list **a, t_list **b, int na, int nb)
{
	t_list		**st_a;
	t_list		**st_b;
	long int	cost;

	st_a = a;
	st_b = b;
	cost = st_cost(*st_a, na) + st_cost(*st_b, nb);
	return (cost);

}

int	check_position(t_list **stack, int nbr)
{
	int		i;
	t_list	*st;

	st = *stack;
	i = 0;
	while (st)
	{
		if (*(st->content) == nbr)
			return (i);
		i++;
		st = st->next;
	}
	return (0);
}

int	lst_min(t_list **stack)
{
	int		min;
	t_list	*st;

	st = *stack;
	min = *(st->content);

	while (st)
	{
		if (*(st->content) < min)
			min = *(st->content);
		st = st->next;
	}
	return (min);
}
