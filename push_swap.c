/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncalogsilva <goncalogsilva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:35:39 by goncalogsil       #+#    #+#             */
/*   Updated: 2023/05/02 16:06:25 by goncalogsil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	if (ac < 2)
		return (0);
	if (check_args(ac, av))
	{
		ft_printf("Error\n");
		return (0);
	}
	a = stack_init(ac, av);
	b = NULL;
	printf("\nStack A\n\n");
	print_list(a);
	tiny_sort(&a);
	printf("\nStack A\n\n");
	print_list(a);
	printf("\nStack B\n\n");
	print_list(b);
	return (0);
}
