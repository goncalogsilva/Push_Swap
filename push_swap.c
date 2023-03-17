/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncalogsilva <goncalogsilva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:35:39 by goncalogsil       #+#    #+#             */
/*   Updated: 2023/03/09 12:05:11 by goncalogsil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{   
    t_list  *a;
    t_list  *b;
    
    if (ac < 2)
        return(0);
    
    /* Validates the arguments */  
    if (check_args(ac, av))
    {
        ft_printf("Error\n");
        return (0);
    }
    
    a = stack_init(ac, av);
    b = NULL;
    printf("\nStack A\n\n");
    print_list(a);
    swap(&a);
    printf("\nAfter Swap\n\n");
    printf("\nStack A\n\n");
    print_list(a);
    printf("\nStack B\n");
    print_list(b);
    push(a, b);
    printf("\nAfter Push\n\n");
    printf("\nStack A\n\n");
    print_list(a);
    printf("\nStack B\n");
    print_list(b);
    return (0);
}