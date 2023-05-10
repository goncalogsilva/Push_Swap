/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:31:13 by goncalogsil       #+#    #+#             */
/*   Updated: 2023/05/10 15:43:07 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack)
{
	t_list	*x;
	t_list	*y;

	x = *stack;
	if (x != NULL)
		y = x->next;
	else
	{
		y = NULL;
		return ;
	}
	*stack = y;
	x->next = y->next;
	y->next = x;
}

void	push(t_list **stack_s, t_list **stack_d)
{
	t_list	*aux;

	if (!(*stack_s))
		return ;
	aux = *stack_s;
	*stack_s = (*stack_s)->next;
	aux->next = *stack_d;
	*stack_d = aux;
}

void	rotate(t_list **stack)
{
	t_list	*s;
	t_list	*last;

	s = *stack;
	last = ft_lstlast(s);
	last->next = s;
	*stack = s->next;
	s->next = NULL;
}

void	r_rotate(t_list **stack)
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
