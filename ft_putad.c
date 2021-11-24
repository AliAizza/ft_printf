/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putad.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 23:13:53 by aaizza            #+#    #+#             */
/*   Updated: 2021/11/24 18:05:07 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	ft_puthexa(unsigned long n, char a)
{
	char	c;
	int		i;

	i = 0;
	if (a == 'x')
	{
		c = n + 87;
		i += ft_putchar(c);
	}
	else if (a == 'X')
	{
		c = n + 55;
		i += ft_putchar(c);
	}
	return (i);
}

static int	ft_puthexx(unsigned long n, char a)
{
	char	c;
	int		i;

	i = 0;
	if (n >= 16)
	{
		i += ft_puthexx(n / 16, a);
		i += ft_puthexx(n % 16, a);
	}
	else if (n >= 10 && n < 16)
		i += ft_puthexa(n, a);
	else if (n >= 0 && n <= 9)
	{
		c = n + 48;
		i += ft_putchar(c);
	}
	return (i);
}

int	ft_putad(unsigned long n)
{
	int	i;

	i = 0;
	i += ft_putstr("0x");
	i += ft_puthexx(n, 'x');
	return (i);
}
