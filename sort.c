/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:44:34 by goncalogsil       #+#    #+#             */
/*   Updated: 2023/05/25 19:21:25 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2(t_list **stack)
{
	if (*((*stack)->next->content) < *((*stack)->content))
		sa(stack);
}

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

void	sort_init(t_list **a, t_list **b)
{
	int		med;
	t_list	*st_a;

	st_a = *a;
	while (ft_lstsize(*a) > 3)
	{
		med = check_mean(st_a);
		if (*((st_a)->content) <= med)
			pb(a, b);
		else
			ra(a);
	}
	if (ft_lstsize(*a) == 3)
		sort3(a);
}

void	sort_plus(t_list **a, t_list **b)
{
	t_list		*st_b;
	long int	cost;
	int			pos_a;
	int			pos_b;

	st_b = *b;
	cost = LONG_MAX;
	while (st_b)
	{
		st_b->bf = best_friend(a, *(st_b->content));
		if (calc_cost(a, b, st_b->bf, *(st_b->content)) < cost)
		{
			cost = calc_cost(a, b, st_b->bf, *(st_b->content));
			pos_a = check_position(a, st_b->bf);
			pos_b = check_position(b, *(st_b->content));
		}
		st_b = st_b->next;
	}
	printf("\nStack A\n\n");
	print_list(*a);
	printf("\nStack B\n\n");
	print_list(*b);
	printf("POS A: %d\n", pos_a);
	printf("POS B: %d\n", pos_b);
	put_a_up(a, pos_a);
	put_b_up(b, pos_b);
	printf("\nStack A\n\n");
	print_list(*a);
	printf("\nStack B\n\n");
	print_list(*b);
	pa(a, b);
}

void	final_sort(t_list **a, t_list **b)
{
	if (!check_sort(a))
	{
		sort_init(a, b);
		while (ft_lstsize(*b) > 0)
			sort_plus(a, b);
		//put_a_up(a, check_position(a, lst_min(a)));
	}
}

