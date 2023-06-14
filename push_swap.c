/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncalogsilva <goncalogsilva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:35:39 by goncalogsil       #+#    #+#             */
/*   Updated: 2023/06/14 16:28:08 by goncalogsil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	int		*arg;

	if (ac < 2)
		return (0);
	if (check_args(ac, av))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	arg = (int *) malloc((ac - 1) * sizeof(int));
	if (!arg)
		return (0);
	a = stack_init(ac, av, arg);
	b = NULL;
	master_sort(&a, &b);
	/*printf("\nStack A\n\n");
	print_list(a);
	printf("\nStack B\n\n");
	print_list(b);*/
	freeList(a);
	freeList(b);
	free(arg);
	return (0);
}
