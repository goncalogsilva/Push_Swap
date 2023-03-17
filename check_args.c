/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:02:15 by goncalogsil       #+#    #+#             */
/*   Updated: 2023/03/17 16:56:02 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_num(int n, char **args)
{
	int	i;

	while (n > 1)
	{
		i = 0;
		while (args[n - 1][i])
		{
			if (args[n - 1][i] == '-')
				i++;
			if (args[n - 1][i] < 48 || args[n - 1][i] > 57)
				return (1);
			i++;
		}
		n--;
	}
	return (0);
}

int	check_int(int n, char **args)
{
	int	i;

	i = 1;
	while (i < n)
	{
		if (ft_atoi(args[i]) > INT_MAX || ft_atoi(args[i]) < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

int	check_dup(int n, char **args)
{
	int	i;
	int	j;

	i = 1;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (ft_atoi(args[i]) == ft_atoi(args[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_args(int n, char **args)
{
	if (check_num(n, args))
		return (1);
	if (check_int(n, args))
		return (1);
	if (check_dup(n, args))
		return (1);
	return (0);
}
