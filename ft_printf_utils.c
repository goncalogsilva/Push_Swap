/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncalogsilva <goncalogsilva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:35:53 by goncalogsil       #+#    #+#             */
/*   Updated: 2023/02/28 12:38:58 by goncalogsil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	print_dectohexlower(int j)
{
	char	n;

	n = j + '0';
	if (j > 9 && j < 16)
		n = j + 87;
	return (write(1, &n, 1));
}

static long int	multiplicador_dectohexlower(long i, long nb)
{
	i = 16;
	while (nb / i != 0)
	{
		i = i * 16;
	}
	i = i / 16;
	return (i);
}

int	ft_dectohexlower(unsigned long n)
{
	long int		i;
	int				j;
	int				cnt;
	unsigned long	num;

	num = n;
	i = 16;
	cnt = 0;
	i = multiplicador_dectohexlower(i, num);
	while (i >= 1)
	{
		j = num / i;
		cnt += print_dectohexlower(j);
		num = num - (j * i);
		i = i / 16;
	}
	return (cnt);
}

static int	print_dectohexupper(int j)
{
	char	n;

	n = j + '0';
	if (j > 9 && j < 16)
		n = j + 55;
	return (write(1, &n, 1));
}

static long int	multiplicador_dectohexupper(long i, long nb)
{
	i = 16;
	while (nb / i != 0)
	{
		i = i * 16;
	}
	i = i / 16;
	return (i);
}

int	ft_dectohexupper(unsigned long n)
{
	long int		i;
	int				j;
	int				cnt;
	unsigned long	num;

	num = n;
	i = 16;
	cnt = 0;
	i = multiplicador_dectohexupper(i, num);
	while (i >= 1)
	{
		j = num / i;
		cnt += print_dectohexupper(j);
		num = num - (j * i);
		i = i / 16;
	}
	return (cnt);
}

int	ft_ptrtohex(unsigned long n, int flag)
{
	int		cnt;
	int		r;
	char	c;

	cnt = 0;
	if (!n)
	{
		cnt = write(1, "(nil)", 5);
		return (cnt);
	}
	if (flag == 0)
		cnt = write(1, "0x", 2);
	if ((n / 16) != 0)
		cnt += ft_ptrtohex((n / 16), 1);
	r = n % 16;
	c = r + '0';
	if (r > 9 && r < 16)
		c = r + 87;
	cnt += write(1, &c, 1);
	return (cnt);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

static int	print_u(int j)
{
	char	n;

	n = j + '0';
	return (write(1, &n, 1));
}

static long int	multiplicador_u(long int i, long nb)
{
	i = 10;
	while (nb / i != 0)
	{
		i = i * 10;
	}
	i = i / 10;
	return (i);
}

int	ft_putnbr_u(long nb)
{
	long int	i;
	int			j;
	int			cnt;
	long int	num;

	num = nb;
	cnt = 0;
	i = 10;
	i = multiplicador_u(i, num);
	while (i >= 1)
	{
		j = num / i;
		cnt += print_u(j);
		num = num - (j * i);
		i = i / 10;
	}
	return (cnt);
}

static int	print(int j)
{
	char	n;

	n = j + '0';
	return (write(1, &n, 1));
}

static long int	multiplicador(long int i, int nb)
{
	i = 10;
	while (nb / i != 0)
	{
		i = i * 10;
	}
	i = i / 10;
	return (i);
}

int	ft_putnbr(int nb)
{
	long int	i;
	int			j;
	int			cnt;
	long int	num;

	num = nb;
	cnt = 0;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
		cnt++;
	}
	i = 10;
	i = multiplicador(i, num);
	while (i >= 1)
	{
		j = num / i;
		cnt += print(j);
		num = num - (j * i);
		i = i / 10;
	}
	return (cnt);
}

int	ft_putstr(char *s)
{
	if (!s)
		return (write(1, "(null)", 6));
	return (write(1, s, ft_strlen(s)));
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
