/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:47:53 by gode-jes          #+#    #+#             */
/*   Updated: 2023/05/09 14:48:26 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rra(t_list **a)
{
	r_rotate(a);
	ft_printf("rra\n");
}

void    rrb(t_list **b)
{
	r_rotate(b);
	ft_printf("rrb\n");
}

void    rrr(t_list **a, t_list **b)
{
	r_rotate(a);
	r_rotate(b);
	ft_printf("rrr\n");
}