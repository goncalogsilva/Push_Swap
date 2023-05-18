/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:44:34 by goncalogsil       #+#    #+#             */
/*   Updated: 2023/05/10 15:46:55 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2(t_list **stack)
{
	if (*((*stack)->content) < *((*stack)->next->content))
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

void	sort_plus(t_list **a, t_list **b)
{
	int	med;

	while (ft_lstsize(*a) > 3)
	{
		//ft_printf("SIZE: %d\n", ft_lstsize(*a));
		med = check_mean(*a);
		//ft_printf("MEDIA: %d\n", med);
		if (*((*a)->content) <= med)
			pb(a, b);
		else
			ra(a);
	}
	if (ft_lstsize(*a) == 3)
		sort3(a);
}
