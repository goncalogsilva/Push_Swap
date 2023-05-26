/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:35:39 by goncalogsil       #+#    #+#             */
/*   Updated: 2023/05/25 18:53:27 by gode-jes         ###   ########.fr       */
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
	final_sort(&a, &b);
	//ft_printf("MEDIA: %d\n", check_mean(a));
	//printf("\nStack A\n\n");
	//print_list(a);
	//sort2(&a);
	//printf("\nStack A\n\n");
	//print_list(a);
	//printf("\nStack B\n\n");
	return (0);
}
