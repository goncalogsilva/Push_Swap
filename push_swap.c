/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:35:39 by goncalogsil       #+#    #+#             */
/*   Updated: 2023/03/17 17:47:02 by gode-jes         ###   ########.fr       */
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
	r_rotate(&a);
	printf("\nAfter Reverse Rotate\n\n");
	print_list(a);
	print_list(b);
	return (0);
}
