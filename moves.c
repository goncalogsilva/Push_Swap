/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:31:13 by goncalogsil       #+#    #+#             */
/*   Updated: 2023/03/17 17:18:19 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack)
{
	t_list	*prev;
	t_list	*x;
	t_list	*y;

	prev = NULL;
	x = *stack;
	if (x != NULL)
		y = x->next;
	else
	{
		y = NULL;
		return ;
	}
	while (y->next != NULL)
	{
		prev = x;
		x = y;
		y = y->next;
	}
	if (prev != NULL)
		prev->next = y;
	else
		*stack = y;
	x->next = y->next;
	y->next = x;
}

void	push(t_list **stack_s, t_list **stack_d)
{
	t_list	*s;
	t_list	*last_s;

	if (!(*stack_s))
		return ;
	s = *stack_s;
	last_s = ft_lstlast(s);
	ft_lstadd_back(stack_d, last_s);
	while ((s->next) != NULL && (s->next)->next != NULL)
		s = s->next;
	if (s->next != NULL)
		s->next = NULL;
}

void	rotate(t_list **stack)
{
	t_list	*s;
	t_list	*last;
	int		i;

	if (!(*stack))
		return ;
	s = *stack;
	last = ft_lstlast(s);
	i = ft_lstsize(s);
	last->next = s;
	while (i > 2)
	{
		s = s->next;
		i--;
	}
	s->next = NULL;
	*stack = last;
}

void	r_rotate(t_list **stack)
{
	t_list	*s;
	t_list	*last;

	s = *stack;
	last = ft_lstlast(s);
	last->next = s;
	*stack = s->next;
	s->next = NULL;
}
