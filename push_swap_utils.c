/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncalogsilva <goncalogsilva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:35:45 by goncalogsil       #+#    #+#             */
/*   Updated: 2023/06/14 16:21:42 by goncalogsil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *list)
{
	int	i;

	i = 1;
	if (list == NULL)
	{
		printf("Empty List\n\n");
		return ;
	}
	while (list != NULL)
	{
		printf("Node %d: %d\n", i, *(int *) list->content);
		list = list->next;
		i++;
	}
}

t_list	*stack_init(int n, char **args, int *arg)
{
	t_list	*head;
	t_list	*new;
	int		i;

	arg[0] = ft_atoi(args[n - 1]);
	head = ft_lstnew(&arg[0]);
	n--;
	i = 1;
	while (n > 1)
	{
		arg[i] = ft_atoi(args[n - 1]);
		new = ft_lstnew(&arg[i]);
		ft_lstadd_front(&head, new);
		n--;
		i++;
	}
	return (head);
}

int	check_mean(t_list **stack)
{
	long int	i;
	int			cnt;
	t_list		*aux;

	i = 0;
	cnt = 0;
	aux = *stack;
	while (aux != NULL)
	{
		i += *(aux->content);
		aux = aux->next;
		cnt++;
	}
	i = i / cnt;
	return (i);
}

void freeList(t_list *stack)
{
    t_list	*node;
    while (stack != NULL)
	{
        node = stack;
        stack = node->next;
        free(node);
    }
}
