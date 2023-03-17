/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncalogsilva <goncalogsilva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:35:29 by goncalogsil       #+#    #+#             */
/*   Updated: 2023/03/09 12:13:10 by goncalogsil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include "libft.h"
# include "ft_printf.h"

void    print_list(t_list *list);
t_list  *stack_init(int n, char **args);

int     check_num(int n, char **args);
int     check_int(int n, char **args);
int     check_dup(int n, char **args);
int     check_args(int n, char **args);

void    swap(t_list **stack);
void    push(t_list **stack_s, t_list **stack_d);
void    rotate(t_list *stack);
void    r_rotate(t_list *stack);

#endif