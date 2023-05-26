/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_ups.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:21:53 by gode-jes          #+#    #+#             */
/*   Updated: 2023/05/25 19:29:18 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_a_up(t_list **st_a, int n)
{
	int	i;
	int	size;

	size = ft_lstsize(*st_a);
	i = 0;
	if (n == 0)
		return ;
	if (n > (size / 2))
	{
		i = n;
		while (i < size)
		{
			rra(st_a);
			i++;
		}
	}
	else
	{
		i = n;
		while (i)
		{
			ra(st_a);
			i--;
		}
	}
}

void	put_b_up(t_list **st_b, int n)
{
	int	i;
	int	size;

	size = ft_lstsize(*st_b);
	i = 0;
	if (n == 0)
		return ;
	if (n > (size / 2))
	{
		i = n;
		while (i < size)
		{
			rrb(st_b);
			i++;
		}
	}
	else
	{
		i = n;
		while (i)
		{
			rb(st_b);
			i--;
		}
	}
}

int	check_sort(t_list **stack)
{
	t_list	*st;

	st = *stack;
	while (st->next)
	{
		if (*(st->next->content) < *(st->content))
			return (0);
		st = st->next;
	}
	return (1);
}
