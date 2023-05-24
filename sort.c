/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:44:34 by goncalogsil       #+#    #+#             */
/*   Updated: 2023/05/24 14:05:19 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_list **stack)
{
	if (*((*stack)->next->content) < *((*stack)->content))
		sa(stack);
	if (*((*stack)->next->next->content) < *((*stack)->content))
		rra(stack);
	if (*((*stack)->next->next->content) < *((*stack)->next->content))
	{
		rra(stack);
		sa(stack);
	}
}

int	best_friend(t_list **a, int cont)
{
	long int	dif;
	long int	tmp;
	int			bf;
	t_list	*st_a;
	
	st_a = *a;
	dif = LONG_MAX;
	
	while (st_a)
	{
		tmp = (long int) *((st_a)->content) - cont;
		if (tmp > 0 && tmp < dif)
		{
			dif = tmp;
			bf = cont;
		}
		st_a = st_a->next;
	}
	return (bf);
}

int	calc_cost(t_list **a, t_list **b, int na, int nb)
{
	t_list	*st_a;
	t_list	*st_b;
	int		cost;

	st_a = *a;
	st_b = *b;
	cost = 0;
	
	while (st_a)
	{
		if (*((st_a)->content) == na)
			return;
		
	}
}

void	sort_plus(t_list **a, t_list **b)
{
	int		med;
	t_list	*st_a;
	t_list	*st_b;

	st_a = *a;
	st_b = *b;
	
	while (ft_lstsize(st_a) > 3)
	{
		//ft_printf("SIZE: %d\n", ft_lstsize(*a));
		med = check_mean(st_a);
		//ft_printf("MEDIA: %d\n", med);
		if (*((st_a)->content) <= med)
			pb(a, b);
		else
			ra(a);
	}
	if (ft_lstsize(st_a) == 3)
		sort3(a);
	while (st_b)
	{
		st_b->bf = best_friend(st_a, *((st_b)->content));
	}
}
