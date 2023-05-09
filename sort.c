/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncalogsilva <goncalogsilva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:44:34 by goncalogsil       #+#    #+#             */
/*   Updated: 2023/05/02 16:05:37 by goncalogsil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    tiny_sort(t_list **stack)
{
    
    if (*((*stack)->next->content) < *((*stack)->next->next->content))
        swap(stack);
    if (*((*stack)->content) < *((*stack)->next->next->content))
        r_rotate(stack);
    if (*((*stack)->content) < *((*stack)->next->content))
    {
        r_rotate(stack);
        swap(stack);
    }
}

/*void    master_sort(t_list **stack_a, t_list **stack_b)
{
    int i;

    i = 0;
    while (i++ < 2)
        push(stack_a, stack_b);
    swap_init_b(stack_b);
    
}*/
