/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncalogsilva <goncalogsilva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:08:23 by gode-jes          #+#    #+#             */
/*   Updated: 2023/02/20 15:55:58 by goncalogsil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_char(char c, va_list args)
{
	int	cnt;

	cnt = 0;
	if (c == 'c')
		cnt = ft_putchar(va_arg(args, int));
	else if (c == 's')
		cnt = ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		cnt += ft_ptrtohex(va_arg(args, unsigned long), 0);
	else if (c == 'd')
		cnt = ft_putnbr(va_arg(args, int));
	else if (c == 'i')
		cnt = ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		cnt = ft_putnbr_u(va_arg(args, unsigned int));
	else if (c == 'x')
		cnt = ft_dectohexlower(va_arg(args, unsigned int));
	else if (c == 'X')
		cnt = ft_dectohexupper(va_arg(args, unsigned int));
	else if (c == '%')
		cnt = ft_putchar('%');
	return (cnt);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		cnt;

	va_start(args, s);
	cnt = 0;
	while (*s != '\0')
	{
		if (*s == '%')
		{
			cnt += check_char(*(s + 1), args);
			s++;
		}
		else
			cnt += write(1, s, 1);
		s++;
	}
	va_end(args);
	return (cnt);
}